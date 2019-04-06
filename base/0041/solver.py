#/usr/bin/env python3

opcao1 = raw_input()
num1 = input()
num2 = input()

soma = (num1 + num2)
if opcao1 == "p" and soma % 2 == 0 or \
   opcao1 == "i" and soma % 2 == 1:
    print "Venceu"
else:
    print "Perdeu"