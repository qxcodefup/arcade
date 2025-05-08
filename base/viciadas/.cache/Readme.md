# Bolinhas da sorte

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/viciadas/cover.jpg)

## Motivação

Você, enquanto passeava pelos corredores esquecidos de sua Universidade descobriu um jogo de apostas clandestino.

Nele, existe um GRANDE cilindro como de bingo cheio de bolinhas de gude numeradas.

Todo dia uma bolinha é sorteada, o número é anotado e depois ela é colocada de volta.

Os participantes do jogo não sabem quantas bolinhas existem, nem quais números estão escritos nas bolinhas, podendo inclusive ter números repetidos.

Eles podem, porém, ter acesso a todas as jogadas passadas que aconteceram.

Então você teve uma ideia! Que tal analisar a frequência de ocorrência dos números e verificar o número que se repete mais. Talvez seja uma bila com mais peso que as outras, ou várias bilas com o mesmo número.

## Ação

Conte as ocorrências e descubra qual elemento ocorre mais vezes no vetor.

### Entrada

* linha 1: um número com a quantidade de elementos do vetor (até 5000)
* linha 2: o vetor de inteiros.

## Saída

* linha 1: a quantidade de elementos diferentes.
* linha 2: o elemento que se repete mais, se mais de um, coloque todos em ordem
crescente.

## Exemplos

``` py
>>>>>>>> INSERT 01
3 
1 1 2
======== EXPECT
2
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
5
1 3 2 2 3
======== EXPECT
3
2 3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
10
2 9 3 3 3 2 1 4 1 1
======== EXPECT
5
1 3
<<<<<<<< FINISH
```
