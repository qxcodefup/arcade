## @154 #06_mat L3 - OBI 2015 - Fase 2 - Nível Júnior - Código
## @qxcode

![](capa.jpg)

## Motivação

Gabriel inventou um código para representar números naturais, usando uma sequência de zeros e uns. Funciona assim, o número natural é representado pela quantidade de vezes que o padrão "100" aparece na sequência. Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes; e na sequência 11101010111110111010101 ele não aparece nenhuma vez. Você deve ajudar Gabriel e implementar um programa que, dada a sequência de zeros e uns, calcule quantas vezes o padrão "100" aparece nela.

### Entrada

- A primeira linha da entrada contém um inteiro N, o tamanho da sequência. A segunda linha contém a sequência de N zeros e uns, separados por espaço em branco.

### Saída

- Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência.

## Restrições

*   3 ≤ N ≤ 104

## Exemplos

```
>>>>>>>>
17
1 1 1 0 1 0 0 1 0 1 0 0 1 1 1 1 0
========
2
<<<<<<<<

>>>>>>>>
8
1 1 1 1 0 1 1 1
========
0
<<<<<<<<

>>>>>>>>
3
1 0 0
========
1
<<<<<<<<

>>>>>>>>
3
0 1 0
========
0
<<<<<<<<
```

<!---
>>>>>>>> 01
10
0 0 0 0 0 1 0 1 1 0
========
0
<<<<<<<<


>>>>>>>> 02
10
0 1 1 1 1 1 0 0 1 1
========
1
<<<<<<<<


>>>>>>>> 03
10
1 1 1 1 0 1 1 0 1 1
========
0
<<<<<<<<


>>>>>>>> 04
10
1 1 0 1 1 1 0 1 1 1
========
0
<<<<<<<<


>>>>>>>> 05
10
1 0 0 1 1 0 1 1 0 0
========
2
<<<<<<<<


>>>>>>>> 06
100
1 0 0 1 1 1 1 1 0 0 1 0 1 1 1 0 1 0 1 0 0 1 1 1 0 0 1 1 0 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 0 1 0 0 1 1 1 1 1 1 0 1 1 0 1 1 0 1 0 0 0 0 0 1 0 1 1 0 0 0 1 1 1 1 1 1 0 0 1 0 1 1 1 0 0 0 0 1 0 1 1 0 1 0 0 1
========
13
<<<<<<<<


>>>>>>>> 07
100
0 0 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 0 1 0 1 0 1 0 0 0 0 1 1 1 1 1 1 0 1 0 1 1 1 1 1 0 0 0 0 1 0 1 0 1 1 0 0 0 1 0 0 0 0 0 0 0 1 0 1 1 0 1 0 0 0 1 1 1 1 1 0 1 1 0 1 1 1 0 1 1 1 1 0 0 0 0
========
6
<<<<<<<<


>>>>>>>> 08
100
0 0 0 1 1 1 1 0 0 1 0 0 1 1 1 0 1 1 1 1 0 0 0 0 1 0 1 1 0 0 1 1 1 1 1 1 0 0 0 1 1 0 1 1 1 1 1 0 0 1 0 0 1 1 1 0 1 0 1 1 0 0 0 0 1 0 0 0 0 1 0 1 1 1 1 1 0 0 1 1 1 1 1 0 0 0 0 1 1 0 0 0 1 1 0 0 1 1 1 1
========
13
<<<<<<<<


>>>>>>>> 09
100
0 1 1 1 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 0 1 0 0 1 1 0 0 0 1 0 0 0 0 0 0 1 1 1 1 1 0 1 0 1 0 1 1 1 1 1 0 0 1 1 0 1 0 0 0 1 1 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 1 0 0 0 1 0 1 1 1 0 1 1 0 0 1 0 0 1 1 0 1 0 1
========
12
<<<<<<<<


>>>>>>>> 10
100
1 0 0 1 1 1 1 0 0 0 0 1 0 0 1 1 1 0 1 1 1 1 0 1 0 0 0 1 0 1 0 1 1 0 0 1 0 1 1 1 0 1 1 0 0 1 0 0 0 1 0 1 0 0 0 1 0 0 1 0 0 1 1 1 1 1 0 1 1 1 0 1 0 1 0 1 1 0 0 1 0 0 0 1 0 0 1 1 1 1 0 1 0 0 0 0 1 0 0 0
========
15
<<<<<<<<


>>>>>>>> 11
100
0 1 1 0 0 0 0 0 0 1 0 1 0 0 1 0 0 0 1 0 1 0 0 0 1 1 0 0 1 1 1 1 1 0 1 1 1 1 1 0 1 1 1 1 1 0 0 1 1 1 1 1 0 1 1 1 0 0 1 0 0 0 1 1 0 1 0 1 0 0 1 0 1 1 0 0 1 1 0 0 1 0 0 1 0 0 0 1 0 0 0 1 0 1 0 0 0 1 0 0
========
16
<<<<<<<<
--->