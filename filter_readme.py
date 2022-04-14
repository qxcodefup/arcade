import io

lines = open("Readme.md").read().split("\n")

lines = [l for l in lines if l != ""]

output = io.StringIO()

sections = []
labels = []
names = []
section = 0
links = []

for line in lines:
    if line.startswith("## "):
        section += 1
        output.write("\n\n" + line + "\n")
    elif line.startswith("- ["):
        if "@" in line:
            item = line.split("@")[1].split("]")[0]
            item = item.split(" ")
            del item[1]
            item = " ".join(item)
            item = item.split(" - ")
            label = item[0]
            name = item[1]
            output.write("@" + label + " " + name + "\t")
            
            sections.append(str(section))
            labels.append("@" + label)
            names.append(name)
            links.append("https://github.com/qxcodefup/moodle/blob/master/base/" + label + "/Readme.md")

#print(output.getvalue())
print("\t".join(sections))
print("\t".join(labels))
print("\t".join(names))
print("\t".join(links))