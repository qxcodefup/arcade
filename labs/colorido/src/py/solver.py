n = int(input())
pe = input()

print("[ ", end="")
for i in range(10):
    if i != n:
        print(i, end="")
        print(pe, end=" ")
        if (pe == "d"):
            pe = "e"
        else:
            pe = "d"
if n != 10:
    print("ceu ]")
else:
    print("]")