## #repetição L3 - Arremesso de pedra na lua


![](__capa.jpg)

## Motivação

Vários competidores disputaram uma competição interessante. 

- Eles tinham duas pedras para lançar. 
- Chamemos de pedra A e pedra B. 
- Eles tinham que arremessar ambas as pedras a pelo menos 10 metros de distância.
- Se alguma das pedras caíssem abaixo de 10 metros, ele estaria desclassificado.
- A pontuação pelo obtida é dada pela distância absoluta entre as pedras. Se uma pedra caiu a 12 metros e outra a 15 metros, ele fez 3 pontos.
- Ganha o competidor que faz menos pontos.
- O primeiro competidor tem número índice 0.
- Se houver empate nos pontos, ganha o competidor que tem menor índice.


### Entrada

* O número N de competidores.

* Distância das pedras A e B de cada competidor.

### Saida

- Se ninguém ganhar o jogo, porque todos foram desclassificados, imprima "sem ganhador".

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
```
var numero_de_competidores = ler_inteiro()
var ganhador_indice = -1
var ganhador_pontos = 0
Faça indice variar de 0 até numero_de_competidores
    Leia o valor das duas pedras
    Se ambas as pedras caíram 10 metros ou além
        var pontos = diferenca absoluta entre os dois valores
        se ganhador_indice == -1 ou pontos < ganhador_pontos
            atualiza ganhador_indice e ganhador_pontos
Verifique so houve ganhador e imprima a resposta adequada
```

