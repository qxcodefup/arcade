def eh_vogal(letra):
    vogais = "aeiouAEIOU"
    if letra in vogais:
        return True
    return False

def separa_silabas(palavra):
    lista = []
    tam = len(palavra)
    lista.append(palavra[0])
    for ind in range(1, tam):
        A = palavra[ind - 1]
        B = palavra[ind]
        if eh_vogal(A) and (not eh_vogal(B)):
            lista.append(B)
        else:
            lista[-1] += B
    return lista

nome = input()
saida = ""
palavras = nome.split(" ")
for palavra in palavras:
    silabas = separa_silabas(palavra)
    if len(silabas) > 1:
        saida += silabas[0] + silabas[0]
        saida += palavra + " "
    else:
        saida += palavra + " "

saida = saida.strip()

print(saida)
