## #repetição L1 - Ultrons - Contar Elemento

![](__capa.jpg)
[](t.tio)
## Motivação

Na saga dos Vingadores, o Ultron é um inimigo capaz de fazer cópias de sí mesmo. João é um grande fã da Saga e possui um enorme poster que contém diversas copias do Ultron junto aos heróis. João gostaria de saber quantos Ultrons estão presentes no poster.

## Ação

Faça um programa que dado um vetor, retorne quantas vezes um determinado elemento se repete nele.

### Entrada

* 1ª linha: Os números (X, entre 0 e 9 e N, entre 1 e 50), representado X o número que corresponde ao elemento procurado e N a quantidade de elementos no vetor.

* Linhas subsequentes: os elementos da lista.

### Saída

* A quantidade de vezes que o elemento aparece no vetor.

### Exemplos

```
>>>>>>>>
5 3
2
3
6
========
0
<<<<<<<<

>>>>>>>>
0 4
0
0
1
0
========
3
<<<<<<<<

>>>>>>>>
2 8
2
4
2
6
2
0
2
2
========
5
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
var ultron = ler_inteiro()
var quant = ler_inteiro()
var contador = 0
faça N vezes:
    var auxiliar = ler_inteiro()
    se auxiliar for igual a ultron
        adicione 1 ao contador
Mostre contator
```


