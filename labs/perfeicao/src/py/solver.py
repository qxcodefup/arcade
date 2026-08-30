def calc(texto: str) -> int:
    soma = 0
    for c in texto:
        soma += ord(c)
    soma = soma % 50
    return soma

texto = input()

alf = "abcdefghijklmnopqrstuvwxyz"

achei = False
char = ""
x = "a"
for x in alf:
    if calc(texto + x) == 0:
        char = x
        achei = True
        break
if achei:
    print (texto + x)
else:
    print ("sem sorte")
