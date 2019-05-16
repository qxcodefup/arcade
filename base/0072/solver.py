#parte 1 - Carregar a entrada em um vetor de floats
#5 1.65 1.38 1.49 1.65 1.90
qtd = int(input())
alturas = input().split() #vetor de floats

alturas_float = []
cont = 0
while cont < qtd:
    alturas_float.append(float(alturas[cont]))
    cont += 1

#parte 2 - Calcular a media 
soma = 0
for elem in alturas_float:
    soma += elem
#aqui eu ja tenho a soma
media = soma / len(alturas_float)
if(int(qtd) > 1):
    print("%.2f" % media)

#parte 3 - Imprimir pra cada soldado se ele e P, M ou G
for elem in alturas_float:
    if elem < media:# essa e a parte de voces
        print("P", end = "")
    elif elem == media:
        print("M", end = "")
    else:
        print("G", end = "")
    if(elem != alturas_float[qtd - 1]):
        print(" ", end = "")
print()