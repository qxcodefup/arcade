# @fila do RU - Separar Pares e Ímpares

![_](cover.jpg)

[](solver.cpp)

## Motivação

Você ganhou uma bolsa de auxílio pra organizar a fila do RU.  
Então teve uma brilhante ideia para organizar as filas.  
Ao invés de uma única fila você vai fazer uma para os professores  
e STAs (seu professor agradece) e uma para alunos.

## Ação

Imprima todos os números ímpares na ordem em que foram inseridos na primeira linha, e imprima todos os pares na segunda linha de forma análoga.

### Entrada

* Quantidade N de pessoas na fila.
* N valores inteiros onde um número ímpar representa um aluno e um par representa um servidor.  

## Saída

* Os números ímpares na ordem que aparecem na entrada.
* Os números pares na ordem que aparecem na entrada.

## Exemplos

``` py
>>>>>>>> INSERT
2
4 2
======== EXPECT
[ ]
[ 4 2 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
2 6 4 1
======== EXPECT
[ 1 ]
[ 2 6 4 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
1 2 5 3 4 9
======== EXPECT
[ 1 5 3 9 ]
[ 2 4 ]
<<<<<<<< FINISH
```
