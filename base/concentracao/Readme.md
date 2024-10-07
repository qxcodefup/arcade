# @concentracao - Jogo de laço

![_](cover.jpg)

## Motivação

Um jogo de concentração muito antigo é fazer contagem utilizando dois número diferentes. O primeiro número cresce e o segundo número diminui até que eles troquem de posição.

Se a pessoa estiver utilizando os números 1 e 10, ela deve manter na memória e repetir a sequência até os número trocarem de posição. A sequência completa fica assim:

```py
1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1
```

## Ação

Dados dois número A e B, com A sempre menor que B, gere a sequencia que o jogador deve realizar.

## Exemplos

``` py
>>>>>>>> INSERT
1 10
======== EXPECT
[ 1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1 5
======== EXPECT
[ 1 5 2 4 3 3 4 2 5 1 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 7
======== EXPECT
[ 2 7 3 6 4 5 5 4 6 3 7 2 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 8
======== EXPECT
[ 0 8 1 7 2 6 3 5 4 4 5 3 6 2 7 1 8 0 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 9
======== EXPECT
[ 0 9 1 8 2 7 3 6 4 5 5 4 6 3 7 2 8 1 9 0 ]
<<<<<<<< FINISH
```

[Resolução](https://youtu.be/L9FmHLc87uw)
