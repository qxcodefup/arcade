_a = int(input())
_b = int(input())

cont = 0
if _a <= _b:
    while _a <= _b:
        if _a % 2 == 0:
            cont += _a
        _a += 1
    print (cont)
else:
    print ("invalido")