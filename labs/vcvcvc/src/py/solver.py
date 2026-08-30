def eh_vogal(letra: str) -> bool:
    vogais = "aeiouAEIOU"
    if letra in vogais:
        return True
    return False

texto: str = input()
saida: str = ""
for x in texto:
    if x == " ":
        saida += " "
    elif eh_vogal(x):
        saida += "v"
    else:
        saida += "c"

print (saida)