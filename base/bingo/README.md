# Contando ocorrência na cartela

![_](cover.jpg)

## Contexto

Sua avó, uma frequentadora assídua do bingo dos idosos, estava tendo dificuldades para saber quantos números estava acertando por partida. Sendo o bom neto que você é, decidiu criar um programa para ajudá-la.

Sua tarefa é, dado um vetor de 6 números inteiros (os números sorteados), verificar quantos deles estão presentes na cartela de bingo fixa da sua avó, que é a matriz 4x4 abaixo:

```py
 1  9 27 23  
34 20 37 47  
30 87 55 69  
13 60 99 66
```

### Entrada

- Uma linha contendo 6 números inteiros, separados por espaços.

### Saída

- Um número inteiro representando a quantidade de números da entrada que se repetem na matriz 4x4.

### Restrições

- A entrada consistirá em 6 números inteiros.

### Testes

``` py
>>>>>>>> INSERT
55 30 2 974 79 23
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 7 88 31 19 40
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
47 20 23 27 9 1
======== EXPECT
6
<<<<<<<< FINISH
```
