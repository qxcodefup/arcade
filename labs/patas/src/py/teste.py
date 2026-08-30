chico = int(input())
cebola = int(input())
qtd = int(input())

total = 0
while qtd > 0:
    qtd -= 1
    animal = input()
    if animal == "g":
        total += 2
    else:
        total += 4

print(total)

chico_abs = chico - total
chico_abs = chico_abs if chico_abs >= 0 else -chico_abs
cebola_abs = cebola - total
cebola_abs = cebola_abs if cebola_abs >= 0 else -cebola_abs

if chico_abs < cebola_abs:
    print("Chico Bento")
elif cebola_abs < chico_abs:
    print("Cebolinha")
else:
    print("empate")