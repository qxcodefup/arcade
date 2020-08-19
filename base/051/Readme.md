## #repetição L3 - Arremesso de pedra na lua


![](__capa.jpg)

## Motivação

Vários competidores disputaram uma competição interessante. Eles tinham duas pedras para lançar. Chamemos de pedra A e pedra B. Eles tinham que arremessar ambas as pedras a pelo menos 10 metros de distância. Ganhava a competição, o competidor que arremessou as duas além da linha de 10 m o mais próximo possível uma da outra. Se alguma das pedras tiver distância menor que 10 metros, o competidor estará desclassificado.

### Entrada

* O número N de competidores.

* Distância das pedras A e B de cada competidor.

### Saida

* O número do competidor vitorioso. O primeiro competidor tem número 0. Caso haja empate, mostre o de menor número. Se ninguém ganhar o jogo, porque não conseguiram lançar as bolas além dos 10 metros, imprima "sem ganhador".

## Exemplos

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
4
12 15
20 23
10 9
35 35
========
3
<<<<<<<<

```
## Ajuda
#### Pseudocódigo
```
Leia o numero_de_competidores
Laço inicia i = 0 e adiciona +1 enquanto menor que numero_de_competidores 
  Leia distancia_da_pedraA e distancia_da_pedraB
  Se(distancia_da_pedraA maior ou igual a 10 e distancia_da_pedraB maior ou igual a 10)
    distancia = distancia_da_pedraA - distancia_da_pedraB
    Se (distandia menor que 0) 
      distancia * -1
    Se((ganhador igual a -1) ou (distancia menor que melhor_distancia))
      ganhador = i
      melhor_distancia = distancia 
fim do laço
Se(ganhador  diferente de -1)
  Mostre ganhador 
Senão 
  Mostre sem ganhador
```

