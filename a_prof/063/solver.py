#entrada de dados. Transformar de string 
#pra vetor de inteiro
#5 1 1 2 3 12   <<<<<<

linha = input().split()
vetor = [] #vetor vazio
del linha[0]

for elem in linha: #elem eh uma string
    vetor.append(int(elem))#vou transformar de str para inteiro

soma = 0
ases = 0
for elem in vetor:
    if elem == 1: # As
        soma += 11
        ases += 1
    elif elem > 10:
        soma += 10
    else:
        soma += elem

    
while soma > 21 and ases > 0:
	ases -= 1 #tiro um as
	soma -= 10 #retirar um as baixa a minha conta em 10

print(soma)