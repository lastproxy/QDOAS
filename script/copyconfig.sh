#! /bin/bash

in=$1
out=$2

progname=`basename $0`
if [ $# -ne 2 ]
then
    cat <<EOF

    Copy a Qdoas config file as well as all auxiliary data files
    (references, cross sections, slit functions), and use the new
    paths in the new config file.

    Usage: $progname <input file> <output file>

    <input file> should be a Qdoas config file.

    If <output file> is a path ending in '.xml', this will be the name
    of the new config file, and cross section/reference/slit
    function... files will be written in subdirectories one level
    below it. If <output file> does not end in '.xml', it is
    interpreted as a directory, and the copy has the same name as the
    original file name.

    examples:

      $progname ~/myconfig.xml ~/share/newconfig.xml

      will create:

      ~/share/newconfig.xml
             /xs/...
             /ref/...
             /instr/...
             /output/...

      $progname ~/myconfig.xml ~/share/test

      will create:

      ~/share/test/myconfig.xml
                  /xs/...
                  /ref/...
                  /instr/...
                  /output/...

    Cross sections are copied to subdirectory 'xs/', reference spectra
    are copied to 'ref/' and output paths are changed to 'output/'.

    Limitations:

     - Cross sections and reference spectra should have unique file
       names.  If the 'input' configuration contains different cross
       sections or reference spectra, which are located in different
       directories, but have the same filename, the resulting
       configuration will only contain a copy of the last cross
       section.

     - Existing cross section/reference/residual files in the
       subdirectories xs/ref/output will be overwritten without
       warning if they have the same name.  If you are not sure, the
       safest is to put each config in a separate directory.

     - AMF files are not copied.

     - When you want to share the config file with other users in the
       projects folder, it's best to use a shared absolute
       path for the output file, starting with

       /bira-iasb/proj_dyn/DOAS/...

       Otherwise, the paths in the output file will appear as

       /bira-iasb/data23/DOAS/...

       and might have to be changed in the future.

EOF
    exit 1
fi

if [ ! -f $in ]
then
    echo "File ${in} does not exist"
    exit 1
fi

# strip trailing '.xml' filename and '/' from $out, if present
outdir=${out%/*.xml}
outdir=${outdir%/}

# remove starting path and '/' from $out to get filename
outfile=${out#${outdir}}
outfile=${outfile#/}

fixedpath=""
replace_paths () {
    $fixedpath=$(sed 's/\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' <<< $1)
    return 0
}

# if no '....xml' filename was specified, take the original filename.
if [ "${outfile}" == "" ]
then
    outfile=`basename $in`
fi

# if $outdir is a path to a shared directory, referenced from within a
# home directory, replace the path by an equivalent path which is accessible by everyone:
outdir=$(sed -r -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' <<< $outdir)

# create subdirectories for output, cross sections, slit functions and reference/calibration files
mkdir -p $outdir/output $outdir/xs $outdir/instr $outdir/ref

# extract paths from input config and copy files to destination dir:
# reference spectra
cat $in | sed -rn -e 's/.*ref(one|two)?\=\"([^\"]*\/[^\"]+)\".*/\2/p' | sed -r -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' | while read file
do
    cp "$file" "$outdir/ref/${file##/*/}"
done
# cross sections
cat $in | sed -rn -e 's/.*csfile\=\"([^\"]*\/[^\"]+)\".*/\1/p' | sed -r -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' | while read file
do
    cp "$file" "$outdir/xs/${file##/*/}"
done
# slit functions

cat $in | grep -o -P "(slfFile|calib|instr|dark|offset)\=\"([^\"]*\/[^\"]+)\"" \
    | sed -r 's/[^=]+=\"([^\"]+)\"/\1/' \
    | sed -r -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' | sort | uniq | while read file
do
    cp "$file" "$outdir/instr/${file##/*/}"
done
# residuals:
cat $in | sed -rn -e 's/.*residual\=\"([^\"]*\/[^\"]+)\".*/\1/p' | sed -r -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' | while read file
do
    cp "$file" "$outdir/output/${file##/*/}"
done

#escape '/' in outdir so we can use it in sed command:
outdir_sed=${outdir//\//\\\/}

#substitute paths in output config file
cat $in | sed -r \
    -e "s/(ref(one|two)?\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/ref\/\3\4/" \
    -e "s/(csfile\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/xs\/\2\3/" \
    -e "s/(slfFile\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/instr\/\2\3/" \
    -e "s/(calib\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/instr\/\2\3/" \
    -e "s/(instr\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/instr\/\2\3/" \
    -e "s/(dark\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/instr\/\2\3/" \
    -e "s/(offset\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/instr\/\2\3/" \
    -e "s/(residual\=\")[^\"]+\/([^\"\/]+)(\")/\1${outdir_sed}\/output\/\2\3/" \
    -e "s/(output\ path\=\")[^\"]*\/([^\/\"]+)(\")/\1${outdir_sed}\/output\/\2\3/" \
    -e 's/(\/bira-iasb)?\/home\/[^\/]*\/projects/\/bira-iasb\/projects/' -e 's/(\/bira-iasb)?\/home\/[^\/]*\/share/\/bira-iasb\/projects\/share/' \
    > ${outdir}/${outfile}
