# Busca por proximidade

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/medico/cover.jpg)

## Contexto

No quartel, os soldados formaram uma fila representada por um vetor de inteiros. Nesta fila:

- `1` representa um médico.
- `0` representa um soldado de combate.

Todo soldado de combate que está adjacente a um médico (à esquerda ou à direita) tem mais chances de sobreviver. O objetivo é calcular quantos soldados **não estão adjacentes** a um médico e, portanto, não têm proteção.

### Entrada

- linha 1:  Um número inteiro **'N'** representando a quantidade de elementos do vetor.
 - linha 2: Uma sequência de **N** inteiros, onde cada elemento é **0** (soldado) ou **1** (médico).

### Saída

* A quantidade de soldados que não tem médico à sua direita ou à sua esquerda.

## Exemplos

```py
>>>>>>>> INSERT
3
0 0 1
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
7
1 0 0 0 1 0 1
======== EXPECT
1
<<<<<<<< FINISH
```
