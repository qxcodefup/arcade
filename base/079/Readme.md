## ©04_vetores L3 - Jogo do Avesso V2


![](__capa.jpg)

## Motivação

A brincadeira do avesso funciona assim.

Tem um chefe e os operários. Os operarios ficam em fila. O chefe diz o nome de um operario e os dois operários que estavam perto dele tem que trocar de posição. Se estavam em pé, ficam agachados.

## Ação

Suponha a seguinte configuração onde cada número representa uma pessoa.

\[3 4 8 9 1 5 6\] O chefe grita "4", então o "3" e o "8" se agacham.  
O vetor fica assim: \[-3 4 -8 9 1 5 6\] usando o sinal negativo para representar o agachado.  
Depois o chefe grita "9". O -8 e o 1 se alteram ficando assim: \[-3 4 8 9 -1 5 6\]  
O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número no vetor. Se o chefe disser um número errado, ninguém deve se mexer.

\[DS\]

### Entrada

*   linha 1: o tamanho N do vetor de operarios(0 < N < 100) e a quantidade X de gritos do chefe( 0 < X < 100)
*   linha 2: o vetor de operarios, cada elemento entre (0 < 100)
*   linha 3: o vetor de gritos, cada elemento entre (0 < 100)

### Saída
- o novo vetor.

## Exemplos

```
>>>>>>>>
3 1
3 1 4
1
========
[-3 1 -4]
<<<<<<<<

>>>>>>>>
3 3
3 1 4
1 1 4
========
[3 -1 4]
<<<<<<<<

>>>>>>>>
7 5
3 4 8 9 1 5 6
3 4 5 6 9
========
[-3 -4 8 9 1 -5 -6]
<<<<<<<<
```

## Ajuda


## Dica

- Caso o funcionário esteja na última posição, seu vizinho direito não é modificado. Caso o funcionário esteja na primeira posição, o seu vizinho esquerno não é modificado.

- O valor do grito vale tanto se o número do funcionário for `positivo` ou `negativo`. Exemplo:
```
Grito = 3
vetor = [1 2 3 4], retorna [1 -2 3 -4] 
```            
```
Grito = 3
vetor = [1 2 -3 4], retorna [1 -2 -3 -4] 
```

### Pseudocódigo
```
Ler N
Ler X

Ler vetor
Ler gritos

Para ( i menor que X ):
    Para ( j menor que N ):
        Se ( (vetor[j] igual gritos[i]) ou (-vetor[j] igual gritos[i]) ):
            Se ( j - 1 maior igual 0 ):
                Modificar o vizinho esquerdo
            Se ( j + 1 menor igual N ):
                Modificar o vizinho dieito

Mostrar vetor
```

- Lembrando que para `ler` e `mostrar` um vetor, é necessário um laço/estrutura de repetição. Exemplo:
```
Ler N

Para ( i menor que N ):                     
    Ler vetor[i] // ou mostrar[i]
```