class Aluno:
    def __init__(self, nome: str, n1: float, n2: float, n3: float):
        self.nome = nome
        self.n1 = n1
        self.n2 = n2
        self.n3 = n3
        self.media = (float(n1) + float(n2) + float(n3)) / 3.0

alunos: list[Aluno] = []
qtd = int(input())
for i in range(qtd):
    nome = input()
    n1, n2, n3 = input().split(" ")
    alunos.append(Aluno(nome, float(n1), float(n2), float(n3)))

alunos.sort(reverse=True, key=lambda Aluno: Aluno.media)

i = 0
for aluno in alunos:
    print(str(i) + ": " + aluno.nome)
    i += 1
    print("   Media: %.2f" % aluno.media)
    print("   N1: %.2f, N2: %.2f, N3: %.2f" % (aluno.n1, aluno.n2, aluno.n3))
