## #03_repetição L3 - Blackjack 21!


![](__capa.jpg)

## Motivação

Faça um programa que conte o valor de uma mão de blackjack.  
Ela recebe um vetor de cartas e calcula usando as seguntes regras. K, Q e J valem 10 pontos. ÁS vale 11 pontos. As outras cartas valem seu próprio valor.  
Se a soma de pontos for maior que 21, o Ás passa a valer 1 ponto, diminuindo a soma total, tentando fazer o valor baixar para menos de 21.  
  
No vetor de inteiros, os valores 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.  
\[DS\]

### Entrada

- A entrada começa informando a quantidade de elementos do vetor e é seguida por um vetor de inteiros.  

### Saída

- A saída deve ser um inteiro informando o valor da mão do blackjack.

## Exemplos

```
>>>>>>>>
2 1 13
========
21
<<<<<<<<

>>>>>>>>
2 11 13
========
20
<<<<<<<<

>>>>>>>>
3 1 1 1
========
13
<<<<<<<<

>>>>>>>>
5 1 1 2 3 12
========
17
<<<<<<<<

>>>>>>>>
5 1 1 2 10 12  
========
24
<<<<<<<<
```

## Ajuda

Dica

- Que tal criar uma variavel que armazena a quantidade de `ás` ?

Pseudocódigo
```
Ler numero_cartas
as recebe 0
total recebe 0
auxiliar recebe 1

Para (auxiliar <= numero_cartas) faca:
    Ler carta
    Se (carta == 1):
        Incrementar em uma unidade valor de as
        Somar 11 ao total
    Senao Se (carta >= 10):
        Somar 10 ao total
    Senao:
        Somar o valor de carta ao total

Enquanto (total > 21 e as > 0):
    Subtrair 10 ao total
    Diminuir uma unidade do valor de as

Mostrar (total)
```