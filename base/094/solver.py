def eh_vogal(letra):
    vogais = "aeiouAEIOU"
    if letra in vogais:
        return True
    return False

texto = input()

saida = ""
for x in texto:
    if x == " ":
        saida += " "
    elif eh_vogal(x):
        saida += "v"
    else:
        saida += "c"

print (saida)