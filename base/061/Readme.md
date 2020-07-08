## ©04_vetores L2 - Capoeira invertendo vetor!


![](__capa.jpg)

## Motivação

Um aluno capoeirista estava sentado quietinho no cantinho da UFC quando um amigo perguntou pra ele:

*   Que foi Alfredo. Que cara de sofrimento é essa?
*   Tô pensando nas ironias da vida. Consigo passar 5 minutos de ponta cabeça, mas não consigo inverter esse vetor.

## Ação

Faça uma função que ajude o capoeirista a inverter um vetor passado na entrada.

### Entrada

*   1ª linha: número de elementos

*   2ª linha: vetor de elementos.

### Saida

*   Imprima o vetor invertido.

### Exemplos

``` 
>>>>>>>> 01
4
1 2 3 4
========
[ 4 3 2 1 ]
<<<<<<<<

>>>>>>>> 02
2
1 2
========
[ 2 1 ]
<<<<<<<<

>>>>>>>> 03
6
1 2 3 4 5 6
========
[ 6 5 4 3 2 1 ]
<<<<<<<<

>>>>>>>> 04
5
1 2 3 4 5
========
[ 5 4 3 2 1 ]
<<<<<<<<
```

## Ajuda

#### Pseudocódigo
```
Leia N
Crie um Vetor com o tamanho N
Laço que leia e guarde todos elementos no vetor
Mostre "[ " // repare no espaço que vem depois do colchetes
Laço que inicia i = N - 1 e decrementa 1 enquanto i maior ou igual a 0{
  Mostre Vetor na posição i e coloque um espaço // esse espaço vai separar os números 
}
Mostre "]"
```

