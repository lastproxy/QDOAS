#!/bin/bash

VERSION=$1

if [ ! $VERSION ]
then
    echo "Please provide a version name for the package archive file."
    exit 1
fi

tar --transform "flags=rSh;s,^linux_package,QDOAS-${VERSION}," --exclude-vcs --exclude-backups --exclude="*.directory" -cvzf ./QDOAS-linux_${VERSION}.tar.gz linux_package
