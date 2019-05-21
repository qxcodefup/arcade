op1 = input()
op2 = input()

lista = ["human", "sponge", "paper", "air", "water", "gun", "rock", \
        "fire", "scissors"]

opc1 = lista.index(op1)
opc2 = lista.index(op2)

if opc1 == opc2:
    print ("empate")
elif opc1 < opc2:
    if opc1 + 4 >= opc2:
        print("jog1")
    else:
        print("jog2")
else:
    if opc2 + 4 >= opc1:
        print("jog2")
    else:
        print("jog1")