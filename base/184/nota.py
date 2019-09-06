class Aluno:
    def __init__(self, nome, n1, n2, n3):
        self.nome = nome
        self.n1 = n1
        self.n2 = n2
        self.n3 = n3
        self.media = (float(n1) + float(n2) + float(n3)) / 3.0

alunos = []
qtd = int(input())
for i in range(qtd):
    nome = input()
    n1, n2, n3 = input().split(" ")
    alunos.append(Aluno(nome, n1, n2, n3))

alunos.sort(reverse=True, key=lambda Aluno: Aluno.media)

i = 0
for aluno in alunos:
    print(str(i) + ": " + aluno.nome)
    i += 1
    print("   Média: " + str('{0:4.2f}'.format(aluno.media)))
    print("   N1: " + aluno.n1 + ", N2: " + aluno.n2 + ", N3: " + aluno.n3)

