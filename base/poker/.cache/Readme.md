# Mini poker - OBI2005

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/poker/cover.jpg)

## Motivação

Mini-Poker é o nome de um jogo de cartas que é uma simplificação de Poker, um dos mais famosos jogos de cartas do mundo. Mini-Poker é jogado com um baralho normal de 52 cartas, com quatro naipes (copas, paus, espadas e ouro), cada naipe compreendendo treze cartas (Ás, 2, 3, 4, 5, 6, 7, 8,  
9, 10, Valete, Dama, Rei).  

No início do jogo, cada jogador recebe cinco cartas. O conjunto de cinco cartas vale um certo número de pontos, de acordo com as regras descritas abaixo. Diferentemente do jogo de Poker normal, em Mini-Poker o naipe das cartas é desconsiderado. Assim, para simplificar a descrição do jogo, vamos utilizar os números de 1 a 13 para identificar as cartas do baralho, na ordem dada acima. Uma outra diferença é que pode ocorrer empate entre mais de um vencedor; nesse caso os vencedores dividem o prêmio.  

As regras para pontuação em Mini-Poker são as seguintes:  

1. Se as cinco cartas estão em sequência a partir da carta x (ou seja, os valores das cartas são x, x + 1, x + 2, x + 3 e x + 4), a pontuação é x + 200 pontos. Por exemplo, se as cartas recebidas são 10, 9, 8, 11 e 12, a pontuação é 208 pontos.  
2. Se há quatro cartas iguais x (uma quadra, ou seja, os valores das cartas são x, x, x, x e y), a pontuação é x + 180 pontos. Por exemplo, se as cartas recebidas são 1, 1, 1, 10 e 1, a pontuação é 181 pontos.  
3. Se há três cartas iguais x e duas outras cartas iguais y (uma trinca e um par, ou seja, os valores das cartas são x, x, x, y e y), a pontuação é x + 160 pontos. Por exemplo, se as cartas recebidas são 10, 4, 4, 10 e 4, a pontuação é 164 pontos.  
4. Se há três cartas iguais x e duas outras cartas diferentes y e z (uma trinca, ou seja, os valores das cartas são x, x, x, y e z), a pontuação é x + 140 pontos. Por exemplo, se as cartas recebidas são 2, 3, 2, 2 e 13, a pontuação é 142 pontos.  
5. Se há duas cartas iguais x, duas outras cartas iguais y (x 6= y) e uma outra carta distinta z (dois pares, ou seja, os valores das cartas são x, x, y, y e z), a pontuação é 3 × x + 2 × y + 20 pontos, em que x > y Por exemplo, se as cartas recebidas são 12, 7, 12, 8 e 7, a pontuação é 70 pontos.  
6. Se há apenas duas cartas iguais x e as outras são todas distintas (um par, ou seja, os valores das cartas são x, x, y, z e t), a pontuação é x pontos. Por exemplo, se as cartas recebidas são 12, 13, 5, 8 e 13, a pontuação é 13 pontos.  
7. Se todas as cartas são distintas, não há pontuação.  

## Ação

Escreva um programa que, fornecidas as cartas dadas a um jogador, calcule pontuação do jogador naquela jogada.  
  
### Entrada

A entrada é composta por vários casos de teste, cada um correspondendo a uma jogada. A primeira linha da entrada contém um inteiro N que indica o número de casos de teste (1 ≤ N ≤ 10).

Cada uma das N linhas seguintes contém cinco números inteiros C1 , C2 , C3 , C4 e C5 , representando as cinco cartas recebidas por um jogador (1 ≤ C1 , C2 , C3 , C4 , C5 ≤ 13).

A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).  

## Saída

Para cada caso de teste da entrada, seu programa deve produzir três linhas na saída.

A primeira linha deve conter um identificador do caso de teste, no formato "Teste n”, onde n é numerado sequencialmente a partir de 1.

A segunda linha deve conter a pontuação do jogador considerando as cinco cartas recebidas.

A terceira linha deve ser deixada em branco.

A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente. A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).  

## Restrições

- 1 ≤ N ≤ 100  
- 1 ≤ C1 , C2 , C3 , C4 , C5 ≤ 13

## Exemplos

``` py
>>>>>>>> INSERT 01
5
1 2 3 4 5
10 2 10 2 3
1 2 3 5 4
10 10 3 2 3
1 2 1 2 3
======== EXPECT
Teste 1
201

Teste 2
54

Teste 3
201

Teste 4
56

Teste 5
28

<<<<<<<< FINISH
```
