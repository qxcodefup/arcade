#!/bin/bash

echo "Copying database..."
cp ../ghost/Readme.md Readme.md
rsync -au --delete ../ghost/base/ base
