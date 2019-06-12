## @0068 #04_vet L2 - Organizando a fila do RU - Separar Pares e Ímpares!
## @qxcode
##qxcode

![](capa.jpg)

### Motivação

Você ganhou uma bolsa de auxílio pra organizar a fila do RU.  
Então teve uma brilhante ideia para organizar as filas.  
Ao invés de uma única fila você vai fazer uma para os professores  
e STAs (seu professor agradece) e uma para alunos.

### Ação

Imprima todos os números ímpares na ordem em que foram inseridos na primeira linha, e imprima todos os pares na segunda linha de forma análoga.

### Entrada e Saída

Entrada:

*   Quantidade N de pessoas na fila.
*   N valores inteiros onde um número ímpar representa um aluno e um par representa um servidor.  

Saída:

*   Os números ímpares na ordem que aparecem na entrada.
*   Os números pares na ordem que aparecem na entrada.

### Exemplos

```
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

<!---
>>>>>>>> 01 vazio 10%
0
========
[ ]
[ ]
<<<<<<<<

>>>>>>>> 02 um_par 20%
1
4
========
[ ]
[ 4 ]
<<<<<<<<

>>>>>>>> 03 um_impar
1
5
========
[ 5 ]
[ ]
<<<<<<<<

>>>>>>>> 04 50%
2
5 2
========
[ 5 ]
[ 2 ]
<<<<<<<<

>>>>>>>> 05
4
1 5 4 3
========
[ 1 5 3 ]
[ 4 ]
<<<<<<<<

>>>>>>>> 06
6
9 6 4 8 1 2
========
[ 9 1 ]
[ 6 4 8 2 ]
<<<<<<<<

>>>>>>>> 07 !%
7
9 6 4 8 1 2 1
========
[ 9 1 1 ]
[ 6 4 8 2 ]
<<<<<<<<
--->