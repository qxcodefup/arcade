def esta_em_todos(letra: str, lista: list[str]):
    for pal in lista:
        if not (letra in pal):
            return False
    return True

lista: list[str] = input().split()
match: str = ""

palavra0: str = lista[0]

for letra in palavra0:
    if esta_em_todos(letra, lista):
        if not (letra in match):
            match += letra

print(len(match))