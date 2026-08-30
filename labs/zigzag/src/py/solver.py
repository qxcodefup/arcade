a = int(input())
b = int(input())

while a <= b:
    if a % 3 == 0 and a % 5 == 0:
        print("zigzag")
    elif a % 3 == 0:
        print("zig")
    elif a % 5 == 0:
        print("zag")
    else:
        print(a)
    a += 1