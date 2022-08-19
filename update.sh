user="qxcodefup"
repo="arcade"

indexer Readme.md -t
mdpp Readme.md
mdpp base/* -q

find base -maxdepth 2 -name Readme.md -execdir mapi_def $user $repo {} \;