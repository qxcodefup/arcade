# L2 - @fila do RU - Separar Pares e Ímpares

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/fila/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup fila`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/fila/cover.jpg)

[](solver.cpp)

## Motivação

Você ganhou uma bolsa de auxílio pra organizar a fila do RU.  
Então teve uma brilhante ideia para organizar as filas.  
Ao invés de uma única fila você vai fazer uma para os professores  
e STAs (seu professor agradece) e uma para alunos.

## Ação

Imprima todos os números ímpares na ordem em que foram inseridos na primeira linha, e imprima todos os pares na segunda linha de forma análoga.

## Entrada

* Quantidade N de pessoas na fila.
* N valores inteiros onde um número ímpar representa um aluno e um par representa um servidor.  

## Saída

* Os números ímpares na ordem que aparecem na entrada.
* Os números pares na ordem que aparecem na entrada.

## Exemplos

``` txt
>>>>>>>>
2
4 2
========
[ ]
[ 4 2 ]
<<<<<<<<

>>>>>>>>
4
2 6 4 1
========
[ 1 ]
[ 2 6 4 ]
<<<<<<<<

>>>>>>>>
6
1 2 5 3 4 9
========
[ 1 5 3 9 ]
[ 2 4 ]
<<<<<<<<
```
