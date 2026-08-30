n = int(input())

print("[ ", end="")
for i in range(10):
    if i != n:
        print(i, end=" ")
if n != 10:
    print("ceu ]")
else:
    print("]")