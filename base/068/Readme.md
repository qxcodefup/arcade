## ©04_vetores L2 - Organizando a fila do RU
### Separar Pares e Ímpares

![](__capa.jpg)

## Motivação

Você ganhou uma bolsa de auxílio pra organizar a fila do RU.  
Então teve uma brilhante ideia para organizar as filas.  
Ao invés de uma única fila você vai fazer uma para os professores  
e STAs (seu professor agradece) e uma para alunos.

## Ação

Imprima todos os números ímpares na ordem em que foram inseridos na primeira linha, e imprima todos os pares na segunda linha de forma análoga.

### Entrada

*   Quantidade N de pessoas na fila.
*   N valores inteiros onde um número ímpar representa um aluno e um par representa um servidor.  

### Saída

*   Os números ímpares na ordem que aparecem na entrada.
*   Os números pares na ordem que aparecem na entrada.

## Exemplos

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

## Ajuda

#### Pseudocódigo

```
Leia N
Crie um Vetor de tamanho N
Laço que leia e guarde todos elementos no Vetor
Mostre "[ " // coloque o espaço
Laço que inicia i = 0 e acrecenta 1 enquanto i < N{
  Se Vetor na posição i modudo 2 for igual a 1
    Mostre Vetor na posição i com um espaço
}
Mostre "]" quebra de linha "[ "
Laço que inicia i = 0 e acrecenta 1 enquanto i < N{
  Se Vetor na posição i modudo 2 for igual a 0
    Mostre Vetor na posição i com um espaço
}
Mostre "]"
```
Você pode criar uma função para não repetir o laço que muda apenas a condição do if
