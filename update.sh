user="qxcodefup"
repo="arcade"

indexer Readme.md -t
mdpp Readme.md
mdpp base/* -q

# find and delete folders with name .cache
# find . -type d -name ".cache" -exec rm -rf {} \;

find base -maxdepth 2 -name Readme.md -execdir mapi_def $user $repo {} \;