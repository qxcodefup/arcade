C = int(input())
A = int(input())

quociente, resto = A/(C-1), A%(C-1)
resposta = quociente
if ( resto > 0 ): resposta += 1

print(resposta)