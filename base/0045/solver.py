A = input()
B = input()

cont = 0
if A <= B:
    while A <= B:
        if A % 2 == 0:
            cont += A
        A += 1
    print cont
else:
    print ("invalido")