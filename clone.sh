#!/bin/bash

echo "Copying database..."
cp Readme.md ../arcade/Readme.md
rsync -au --delete base/ ../arcade/base
