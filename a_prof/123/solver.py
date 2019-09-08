def esta_em_todos(letra, lista):
    for pal in lista:
        if not (letra in pal):
            return False
    return True


lista = input().split()
match = ""

palavra0 = lista[0]

for letra in palavra0:
    if esta_em_todos(letra, lista):
        if not (letra in match):
            match += letra

print(len(match))