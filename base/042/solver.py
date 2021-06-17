qtd = int(input())
vet = []

for _ in range(qtd):
    valor = int(input())
    if valor == 0:
        vet.pop()
    else:
        vet.append(valor)

print(sum(vet))
