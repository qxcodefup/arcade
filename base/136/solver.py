gasto_indo = 0
gasto_voltando = 0
tamanho = int(input())
valor = int(input())
for i in range(0, tamanho - 1):
    novo = int(input())
    if(valor - novo) > 0:
        gasto_voltando += valor - novo
    if novo - valor > 0:
        gasto_indo += novo - valor
    valor = novo
print(min(gasto_indo, gasto_voltando))
