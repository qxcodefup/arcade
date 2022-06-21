make_thumbs base/*
indexer Readme.md -t .thumb.jpg
mdpp Readme.md
mdpp base/* -q

#copy missing or changed files
cp Readme.md ../moodle

#making mirror
cd ..
mirror_rep arcade moodle qxcodefup moodle