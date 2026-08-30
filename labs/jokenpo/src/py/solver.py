#/usr/bin/env python3

opcao1 = input()
opcao2 = input()

if opcao1 == opcao2:
    print ("empate")
elif (opcao1 == "R" and opcao2 == "S") or \
    (opcao1 == "P" and opcao2 == "R") or \
    (opcao1 == "S" and opcao2 == "P"):
    print ("jog1")
else:
    print ("jog2")