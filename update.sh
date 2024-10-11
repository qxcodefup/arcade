#!/bin/bash

echo "Copying database..."
cp ../ghost/Readme.md Readme.md
rsync -au --delete ../ghost/base/ base
rsync -au --delete ../ghost/clings/ clings
rsync -au --delete ../ghost/wiki/ wiki
