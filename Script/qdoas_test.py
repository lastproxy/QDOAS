#!/usr/bin/python
"""
 This script takes the path to two versions of doas_cl as arguments.
 It then uses each version to process a set of Qdoas configuration
 files with associated input spectra, and compares the results.

 Each time the script is run, a new directory

   ./output_YYYYMMDD_hhmmss.msecs 

 is created for the output files. The script produces a scatter plot
 of the relative differences for each column for which the results
 from the two doas_cl versions are not identical.

 The script assumes that configuration files and input spectra are
 distributed using the following directory structure:

 Each configuration file has its own subdirectory:

   ./dir1/
         config1.xml
         ...
   ./dir2/
         config2.xml
         ...

 A Qdoas configuration file may contain multiple projects. To analyse
 a set of spectra using this project, we must put the input spectra
 for this project in a subdirectory called `in_<projectname>`.  For
 example, if config1.xml contains a project 'UV' and a project 'VIS',
 and we want to analyse input files uv1.he4, uv2.he4, vis1.he4 and
 vis2.he4, we have to store them like this:

   ./dir1/
         config1.xml
         in_UV/
              uv1.he4
              uv2.he4
         in_VIS/
               vis1.he4
               vis2.he4

"""

import os
import h5py
import sys
import subprocess
import numpy as np
import matplotlib as mpl
mpl.use('Agg')
from matplotlib import pyplot as plt
from datetime import datetime
from threading import Thread
from Queue import Queue
from signal import signal, SIGINT

plt.ioff()

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


def run_doas_cl((options, doas_execs, filename)) :

    processes = []
    for index, doas_cl in enumerate(doas_execs):
        outfile = filename + "_" + str(1+index) + ".ASC"
        command = [ doas_cl,"-o", outfile] + options
        # call doas_cl asynchronously:
        processes.append(subprocess.Popen(command))

    returncodes = []
    for p in processes:
        # wait on all processes and append results
        p.wait()
        returncodes.append(p.poll())

    return (filename, returncodes)

def make_doas_commands(inputdir, outputdir, doas_execs):
    """Read all config and spectrum files found in configdir and
    return a list of commands to process them for each doas_cl
    executable passed in doas_execs."""
    return [ ( ['-c', configdir+configfile,
                '-a', projectdir[3:-1],
                '-f', inputdir + configdir + projectdir + thefile ],
               doas_execs,
               outputdir + configdir + projectdir[3:] + thefile  )
             for configdir in [ d + '/' for d in os.listdir(inputdir)
                                if os.path.isdir(d) and not d.startswith('output_')]
             for configfile in [ f for f in os.listdir(inputdir+configdir)
                                 if os.path.isfile(inputdir+configdir+f) and f.endswith('.xml')][:1]
             for projectdir in [ d + '/' for d in os.listdir(inputdir+configdir)
                                 if os.path.isdir(inputdir+configdir+d) and d.startswith('in_')]
             for thefile in [f for f in os.listdir(inputdir + configdir + projectdir)
                             if os.path.isfile(inputdir + configdir + projectdir + f )]
             ]

def compare_data(arr1, arr2, plot_title):
    # plot relative errors for those columns where output is not exactly the same:
    fillvalue = 9.9692099683868690e+36
    if arr1.dtype == np.float :
        okrange = np.where( (arr1!= 0.0) & ( (arr1 - fillvalue)/arr1 > 0.001) & (arr2!=0.0) & ((arr2 - fillvalue)/arr2 > 0.001) )
    else:
        okrange = np.where(arr1!= 0.0)

    if not np.array_equal(arr1[okrange],arr2[okrange]):
        if arr1.dtype != object:
            fig = plt.figure()
            plt.scatter(arr1[okrange], ((arr1-arr2)/arr1)[okrange], edgecolors='none', s=3)
            fig.savefig(filename + "_" + plot_title + ".png")
            print "wrote plot", filename + "_" + plot_title + ".png"
            plt.close(fig)
        return False
    return True

def compare_ascii(filename):
    have_error = False
    file1 = filename+'_1.ASC'
    file2 = filename+'_2.ASC'
    res1 = np.loadtxt(file1)
    res2 = np.loadtxt(file2)
    if(res1.shape != res2.shape):
        print file1, "<->", file2, ": different number of results"
        have_error = True

    # When each input file only contains a single spectrum, res1 and
    # res2 are 1d arrays.  For the rest of the script to work, we
    # have to convert them to 2d arrays:
    if(len(res1.shape) == 1):
        res1 = np.reshape(res1,(1,res1.shape[0]))
        res2 = np.reshape(res2,(1,res2.shape[0]))

    if(have_error):
        return

    headers=[]
    with open(file1, 'r') as f:
        # output file contains column headers, formatted as "#
        # header1\theader2\t...headern\t".
        while (len(headers) != res1.shape[-1]):
            # Headers may be preceded by other commented lines, so
            # we read consecutive lines of the file until we have
            # found a line with the appropriate number of
            # tab-separated strings.
            headers = f.readline()[2:].split('\t')[:-1]

    rows = np.arange(res1.shape[0])
    # check differences for each column
    for i, (col1, col2) in enumerate(zip(res1.T, res2.T)):
        ok = compare_data(col1, col2, headers[i])
        if not ok:
            print "Results differ for %s, column %s." % (filename, headers[i])

def compare_he5(filename):
    res1 = h5py.File(filename+'_1.he5')
    res2 = h5py.File(filename+'_2.he5')

    # A qdoas he5 output file will normally only have a single
    # swath, anyway:
    for swath_name in res1['HDFEOS/SWATHS'].iterkeys():
        for field_name in res1['HDFEOS/SWATHS'][swath_name]['Data Fields'].iterkeys():
            data1 = res1['HDFEOS/SWATHS'][swath_name]['Data Fields'][field_name][:]
            data2 = res2['HDFEOS/SWATHS'][swath_name]['Data Fields'][field_name][:]
            if data1.shape == data2.shape:
                ok = compare_data(data1,data2,field_name)
                if not ok:
                    print "Results differ for %s, swath '%s' data field '%s'." % (filename, swath_name, field_name)
            else:
                print "Arrays are not same shape for %s, swath '%s', data field '%s'" % (filename, swath_name, field_name)

    res1.close()
    res2.close()

def compare_output(filename):
    """compare the two output files starting with <filename>."""
        
    # if all processes were ok, compare results
    file1_asc = filename + "_1.ASC"
    file2_asc = filename + "_2.ASC"
    file1_he5 = filename + "_1.he5"
    file2_he5 = filename + "_2.he5"

    if os.path.isfile(file1_asc) and os.path.isfile(file2_asc):
        compare_ascii(filename)
    elif os.path.isfile(file1_he5) and os.path.isfile(file2_he5):
        compare_he5(filename)
    else:
        print "missing output file(-s) for " + filename
        return;

if __name__ == '__main__':
    # For each run, an output directory is created containing the
    # current date/dime
    now = datetime.now()
    outputdir = os.path.join("output","test_%04d%02d%02d_%02d%02d%02d.%03d/" % (now.year, 
                                                                                now.month,
                                                                                now.day, 
                                                                                now.hour,
                                                                                now.minute,
                                                                                now.second,
                                                                                now.microsecond/1000) )
    
    if (len(sys.argv) != 3):
        usage = """
  Please provide 

    - the path to two versions of doas_cl to analyse the test
      configurations and compare their results, or

    - the path to existing test results to compare them (again)

  usage:

  %s <doas_cl version 1> <doas_cl version 2>

  or

  %s --compare <path_to_results>
  """
        print usage % (sys.argv[0], sys.argv[0])
        exit(1)

    if sys.argv[1] == '--compare':
        compdir = sys.argv[2]
        for dirname, dirnames, filenames in os.walk(compdir):
            doasoutput = [f[:-6] for f in filenames
                          if f.endswith('_1.he5') or f.endswith('_1.ASC')]
            for filename in doasoutput:
                compare_output(os.path.join(dirname,filename))
    else:
        doasargs = make_doas_commands('./', outputdir, sys.argv[1:3])
        
        outputdirs = set()
        for f in [ outputfile for (command, doas_cl, outputfile) in doasargs]:
            outputdirs.add(os.path.dirname(f))
        for d in outputdirs:
            os.makedirs(d)

        with open(os.path.join(outputdir, 'doascommands.txt'), 'w') as txtfile:
            txtfile.write('\n'.join(sys.argv))
            txtfile.write('\n')
            
        results = map_parallel(16, run_doas_cl, doasargs) # todo: specify chunksize for better granularity?

        for (filename, returncodes) in results:
            # check if any of the doas_cl processes for this file failed
            have_error = False
            for index, returncode in enumerate(returncodes):
                if (returncode != 0):
                    print "process", (1+index),"failed for " + filename
                    have_error = True
            if not have_error:
                compare_output(filename)
