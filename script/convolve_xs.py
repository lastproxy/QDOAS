#!/usr/bin/python

import numpy as np
from os import path
from tempfile import NamedTemporaryFile as tmpfile
import subprocess
import argparse
from datetime import datetime
from threading import Thread
from Queue import Queue
from signal import signal, SIGINT

band = 'band_3'

doas_cl = '/bira-iasb/projects/DOAS/Programmes/QDOAS/doas_cl'
doas_version = '2.110.1'
base_dir = path.dirname(path.realpath(__file__))
config_template = 'tropomi_slit_template.txt'
grid_file = 'tropomi_grid_{band}.txt'.format(band=band)
xml_option = '/con_slit/slit_func/file/file='

num_rows = { 'NOMOPS_BF2bd2-6' : { 'band_3' : 450, 'band_4' : 450 },
             'NOMOPS_BF4bd2-4' : { 'band_3' : 310 } }

def convolution(config_filename, binning, band):

    slit_dir = 'qdoas_slf_{binscheme}'.format(binscheme=binning)

    def convolve_row(row):
        with tmpfile() as out_file:
            slit_filename = path.join(base_dir, slit_dir,
                                      '{band}_row_{row:03d}.txt'.format(band=band, row=row))

            doas_args = [doas_cl,
                         "--version=" + doas_version,
                         "-c", config_filename,
                         "-o", out_file.name,
                         "-xml", xml_option + slit_filename]

            subprocess.call(doas_args)

            data = np.loadtxt(out_file, comments=';')
        return data[:,1]

    return convolve_row

def map_parallel(num_threads, function, arguments):

    results = []

    def worker():
        while True:
            number, arg = q.get()
            result = function(arg)
            results.append( (number, result) )
            q.task_done()

    q = Queue()

    for i in range(num_threads):
        t = Thread(target = worker)
        t.daemon = True
        t.start()

    # label each argument with a job number and add it to the queue
    for j in enumerate(arguments):
        q.put(j)

    # wait for queue jobs in subthread, so we can catch interrupt
    # signals in the main thread
    term = Thread(target=q.join)
    term.daemon = True
    term.start()
    while term.isAlive():
        # calling join with timeout allows us to catch signals
        # (without timeout, this blocks our main thread)
        term.join(3600)

    # due to parallel processing, results will be out of order-> sort
    # them using the job number
    results.sort(lambda x,y: cmp(x[0], y[0]) )

    return [data for num, data in results]

def get_interrupt(num, frame):
    print "got interrupt signal", num
    exit(1)

signal(SIGINT, get_interrupt)

if __name__ == '__main__':

    parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-j', type=int, default=1, help='number of parallel processes')
    parser.add_argument('-I0', type=float, default=0.0, help='absorber concentration for I0 correction')
    parser.add_argument('-grid', default=path.join(base_dir,grid_file), help='target wavelength grid')
    parser.add_argument('-binning', default='NOMOPS_BF2bd2-6', help='binning scheme')
    parser.add_argument('-o', default=None, help='output file')
    parser.add_argument('input', help='cross section to convolve')
    args = parser.parse_args()

    xs_in = path.abspath(args.input)

    name, extension = path.splitext(path.basename(xs_in))
    if args.o:
        xs_out = args.o
    else:
        xs_out = "%s_%s_%s%s" % (name, args.binning, band, extension)

    if args.I0 > 0.0:
        convtype = 'iocorr'
        conv_header = 'I0 correction, conc=%.4e' % args.I0
    else:
        convtype = 'std'
        conv_header = 'standard'

    time = datetime.now()

    with open(path.join(base_dir,config_template), 'r') as f:
        configstring = f.read()
    with tmpfile() as config_file:
        config_file.write(configstring.format(convtype=convtype,
                                              i0conc=args.I0,
                                              input=xs_in,
                                              calib=args.grid))
        config_file.flush()
        xs_data = map_parallel(args.j, convolution(config_file.name, args.binning, band),
                               range(0,num_rows[args.binning][band]))

    with open(xs_in) as f:
        gen = (line for line in f if not line[0] in (';','*'))
        input_grid = np.genfromtxt(gen)[:,0]

    target_grid = np.loadtxt(args.grid)

    output_range = (target_grid > input_grid[0]) & (target_grid < input_grid[-1])

    # 1st row of output data contains wavelength grid
    output_data = [target_grid] + xs_data

    header = """; File generated on %s
; doas_cl version %s
; input cross section: %s
; config file: %s
; convolution type: %s
; binning scheme: %s
""" % (str(time),
       doas_version,
       path.abspath(xs_in),
       path.abspath(config_template),
       conv_header,
       args.binning)

    with open(xs_out, "w") as outfile:
        outfile.write(header)
        np.savetxt(outfile, np.transpose(output_data)[output_range,:])
