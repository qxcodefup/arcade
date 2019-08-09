def calc(texto):
    soma = 0
    for c in texto:
        soma += ord(c)
    soma = soma % 50
    return soma

texto = input()

alf = "abcdefghijklmnopqrstuvwxyz"

achei = False
char = ""
for x in alf:
    if calc(texto + x) == 0:
        char = x
        achei = True
        break
if achei:
    print (texto + x)
else:
    print ("sem sorte")
