#/usr/bin/env python2

opcao1 = raw_input()
opcao2 = raw_input()

if opcao1 == opcao2:
    print "empate"
elif (opcao1 == "R" and opcao2 == "S") or \
    (opcao1 == "P" and opcao2 == "R") or \
    (opcao1 == "S" and opcao2 == "P"):
    print "jog1"
else:
    print "jog2"