#/usr/bin/env python3

opcao1 = input()
num1 = int(input())
num2 = int(input())

soma = (num1 + num2)
if opcao1 == "p" and soma % 2 == 0 or \
   opcao1 == "i" and soma % 2 == 1:
    print ("Venceu")
else:
    print ("Perdeu")