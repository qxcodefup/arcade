import io

lines = open("Readme.md").read().split("\n")

lines = [l for l in lines if l != ""]

output = io.StringIO()

for line in lines:
    if line.startswith("## "):
        output.write("\n\n" + line + "\n")
    elif line.startswith("- ["):
        if "@" in line:
            item = line.split("@")[1].split(" ")[0]
            output.write(item + " ")

print(output.getvalue())