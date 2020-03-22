
def check(code, name):
    cont = 0
    for c in name:
        if c in code:
            cont += 1
    if cont == len(name):
        return "chefe"
    elif cont > len(name)/2:
        return "ultron"
    return "pessoa"

code = input()
names = input().split(" ")
print(" ".join([check(code, name) for name in names]))