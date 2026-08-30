
qtd = int(input())

chocolate = 0
limao = 0
manha = 0
tarde = 0
while (qtd > 0):
    sabor, turno = input().split(" ")
    if sabor == "c":
        chocolate += 1
    elif sabor == "l":
        limao += 1
    
    if turno == "m":
        manha += 1
    elif turno == "t":
        tarde += 1
    qtd -= 1

if chocolate > limao:
    print("c")
elif chocolate < limao:
    print("l")
else:
    print("empate")

if manha < tarde:
    print("m")
elif manha > tarde:
    print("t")
else:
    print("empate")