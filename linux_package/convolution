#! /bin/bash
#
# wrapper script that sets the necessary environment variables to run
# the Qdoas executables, using the included .so-files for Qt, qwt,
# Coda, etc...

DOASDIR=`dirname $0`
DOASPROGRAM=`basename $0`

ARGS_ARR=("$@")
for i in ${!ARGS_ARR[@]}
do
    ARG="${ARGS_ARR[$i]}"
    if [[ $ARG == "--version="* ]]
    then
        export QDOAS_VERSION_STRING="_"${ARG##--version=}
        ARGS_ARR[$i]=''
    fi
done

# check the requested Qdoas version exists
if [[ ! -d ${DOASDIR}/bin${QDOAS_VERSION_STRING} ]]
then
    echo "can not find Qdoas version "${QDOAS_VERSION_STRING#_}
    echo "available versions:"
    for d in ${DOASDIR}/bin_*
    do
        echo "  "${d##/*/bin_}
    done
    exit 1
fi

# ensure required environment variables are not yet set
if [ ! $QDOAS_ENV_SET ]
then
    QTLIBFILE=`ldd ${DOASDIR}/bin/qdoas.bin | grep libQtCore.so.4 | sed -e 's/.*=> \(.*QtCore.so.4\).*/\1/'`
    
    if [ $QTLIBFILE ]
    then # from "libQtCore.so.4.x.y", extract x
        VERSION=`ls -lah ${QTLIBFILE} | sed -n -e 's/.*libQtCore.so\.4\.\([0-9]\+\)\..*/\1/p'`
    fi
    
    export LD_LIBRARY_PATH=${DOASDIR}/lib:$LD_LIBRARY_PATH
    export PATH=$DOASDIR:$PATH
    export CODA_DEFINITION=${DOASDIR}/codadefs
    export QDOAS_HELP_DIR=${DOASDIR}/doc${QDOAS_VERSION_STRING}/Help
    
     # check libraries are there, and version number is >= 4.8 (minor
     # version used for compilation)
    if [ ! $VERSION ] || [ $VERSION -lt 8 ]
    then
        echo "Qt 4.8+ not found, using own Qt libraries."
        export LD_LIBRARY_PATH=${DOASDIR}/libQt:$LD_LIBRARY_PATH
     else
        echo "using system Qt libraries."
    fi
    
    export QDOAS_ENV_SET=true
fi

DOASARGS="${ARGS_ARR[@]}"

# work around a bug in ubuntu (?): need to use "-style cleanlooks" for
# the interface, otherwise we get a segfault...
case $DOASPROGRAM in 
    qdoas|ring|convolution|usamp)
        DOASARGS=$"-style cleanlooks $DOASARGS"
        ;;
    doas_cl)
        DOASARGS="$DOASARGS"
esac

exec $DOASDIR/bin${QDOAS_VERSION_STRING}/${DOASPROGRAM}.bin $DOASARGS
