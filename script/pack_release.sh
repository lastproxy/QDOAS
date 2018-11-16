#!/bin/bash

# compress and encrypt a Qdoas source package. Script should be called
# from the Qdoas root folder (so we see ./Src and ./Doc)

FILENAME=$1

if [ ! $FILENAME ]
then
    echo "Please provide a filename"
    exit 1
fi

tar --exclude-vcs --exclude-backups -czf $FILENAME Src Doc
gpg --no-use-agent --passphrase USOM80n7Cr --symmetric $FILENAME
