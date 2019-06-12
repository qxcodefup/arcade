## @0051 #03_rep L3 - Arremesso de pedra na lua
## @qxcode

![](capa.jpeg)



### Descrição

Vários competidores disputaram uma competição interessante. Eles tinham duas pedras para lançar. Chamemos de pedra A e pedra B. Eles tinham que arremessar ambas as pedras a pelo menos 10 metros de distância. Ganhava a competição, o competidor que arremessou as duas além da linha de 10 m o mais próximo possível uma da outra. Se alguma das pedras tiver distância menor que 10 metros, o competidor estará desclassificado.



### Ação

Faça um programa que retorne o número do vencedor do jogo. O primeiro jogador recebe o número 0. Aquele que tiver o arremesso (A ou B) mais próximo de 10m vence. Arremessos com distância menor que 10 metros do jogador são ignorados.


### Entrada e Saída

Entrada:

* O número N de competidores.
 
* Distância das pedras A e B de cada competidor.
 

Saida:

* O número do competidor vitorioso. O primeiro competidor tem número 0. Caso haja empate, mostre o de menor número. Se ninguém ganhar o jogo, porque não conseguiram lançar as bolas além dos 10 metros, imprima "sem ganhador".
 



### Exemplos

```


>>>>>>>>
2
8 11
10 15
========
1
<<<<<<<<


>>>>>>>>
3
9 12
11 13
10 11
========
2
<<<<<<<<


>>>>>>>>
3
12 15
16 14
10 9
========
1
<<<<<<<<


>>>>>>>>
2
10 8
9 13
========
sem ganhador
<<<<<<<<

```

<!---
>>>>>>>>
2
8 9
12 7
========
sem ganhador
<<<<<<<<


>>>>>>>>
2
10 9
15 19
========
1
<<<<<<<<


>>>>>>>>
3
12 17
14 11
8 9
========
1
<<<<<<<<


>>>>>>>>
3
9 12
11 13
12 13
========
2
<<<<<<<<


>>>>>>>>
4
9 8
9 12
12 9
6 7
========
sem ganhador
<<<<<<<<


>>>>>>>>
4
9 8
9 12
12 15
6 7
========
2
<<<<<<<<


>>>>>>>>
4
9 8
9 12
12 15
18 19
========
3
<<<<<<<<

--->