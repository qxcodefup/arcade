# Mini poker - OBI2005

![_](assets/cover.jpg)

Mini-Poker é o nome de um jogo de cartas que é uma simplificação de Poker, um dos mais famosos jogos de cartas do mundo. Mini-Poker é jogado com um baralho normal de 52 cartas, com quatro naipes (copas, paus, espadas e ouro), cada naipe compreendendo treze cartas (Ás, 2, 3, 4, 5, 6, 7, 8,  
9, 10, Valete, Dama, Rei).  

No início do jogo, cada jogador recebe cinco cartas. O conjunto de cinco cartas vale um certo número de pontos, de acordo com as regras descritas abaixo. Diferentemente do jogo de Poker normal, em Mini-Poker o naipe das cartas é desconsiderado. Assim, para simplificar a descrição do jogo, vamos utilizar os números de 1 a 13 para identificar as cartas do baralho, na ordem dada acima. Uma outra diferença é que pode ocorrer empate entre mais de um vencedor; nesse caso os vencedores dividem o prêmio.  

As regras para pontuação em Mini-Poker são as seguintes:  

1. Se as cinco cartas estão em sequência a partir da carta x (ou seja, os valores das cartas são x, x + 1, x + 2, x + 3 e x + 4), a pontuação é x + 200 pontos. Por exemplo, se as cartas recebidas são 10, 9, 8, 11 e 12, a pontuação é 208 pontos.  
2. Se há quatro cartas iguais x (uma quadra, ou seja, os valores das cartas são x, x, x, x e y), a pontuação é x + 180 pontos. Por exemplo, se as cartas recebidas são 1, 1, 1, 10 e 1, a pontuação é 181 pontos.  
3. Se há três cartas iguais x e duas outras cartas iguais y (uma trinca e um par, ou seja, os valores das cartas são x, x, x, y e y), a pontuação é x + 160 pontos. Por exemplo, se as cartas recebidas são 10, 4, 4, 10 e 4, a pontuação é 164 pontos.  
4. Se há três cartas iguais x e duas outras cartas diferentes y e z (uma trinca, ou seja, os valores das cartas são x, x, x, y e z), a pontuação é x + 140 pontos. Por exemplo, se as cartas recebidas são 2, 3, 2, 2 e 13, a pontuação é 142 pontos.  
5. Se há duas cartas iguais x, duas outras cartas iguais y (x 6= y) e uma outra carta distinta z (dois pares, ou seja, os valores das cartas são x, x, y, y e z), a pontuação é 3 × x + 2 × y + 20 pontos, em que x > y Por exemplo, se as cartas recebidas são 12, 7, 12, 8 e 7, a pontuação é 70 pontos.  
6. Se há apenas duas cartas iguais x e as outras são todas distintas (um par, ou seja, os valores das cartas são x, x, y, z e t), a pontuação é x pontos. Por exemplo, se as cartas recebidas são 12, 13, 5, 8 e 13, a pontuação é 13 pontos.  
7. Se todas as cartas são distintas, não há pontuação.  


Escreva um programa que, fornecidas as cartas dadas a um jogador, calcule pontuação do jogador naquela jogada.  
  
### Entrada

A entrada é composta por vários casos de teste, cada um correspondendo a uma jogada. A primeira linha da entrada contém um inteiro N que indica o número de casos de teste (1 ≤ N ≤ 10).

Cada uma das N linhas seguintes contém cinco números inteiros C1 , C2 , C3 , C4 e C5 , representando as cinco cartas recebidas por um jogador (1 ≤ C1 , C2 , C3 , C4 , C5 ≤ 13).

A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).  

### Saída

Para cada caso de teste da entrada, seu programa deve produzir três linhas na saída.

A primeira linha deve conter um identificador do caso de teste, no formato "Teste n", onde n é numerado sequencialmente a partir de 1.

A segunda linha deve conter a pontuação do jogador considerando as cinco cartas recebidas.

A terceira linha deve ser deixada em branco.

A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente. A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).  

## Restrições

- 1 ≤ N ≤ 100  
- 1 ≤ C1 , C2 , C3 , C4 , C5 ≤ 13

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
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

```py
>>>>>>>> INSERT
100
11 7 11 11 8
3 9 3 9 3
10 2 1 7 9
13 6 13 6 13
5 3 13 6 2
12 1 11 7 9
4 5 4 4 5
10 9 9 9 9
8 9 8 8 7
1 1 6 1 1
2 3 5 4 1
3 3 7 10 13
9 9 9 4 6
1 3 1 1 9
11 11 5 5 11
3 12 7 6 9
4 1 1 4 4
5 10 6 2 2
7 4 7 7 2
5 1 5 1 1
1 2 2 2 2
6 3 3 6 3
8 5 4 7 6
1 6 4 12 5
11 8 4 4 11
4 5 6 3 2
3 9 5 5 5
1 12 1 10 2
13 10 4 6 12
1 1 1 1 7
9 9 2 9 2
9 7 10 11 8
1 4 1 1 1
4 3 4 4 6
13 8 10 11 12
3 6 7 5 4
8 2 8 8 13
8 11 13 1 6
10 10 2 2 2
3 6 5 7 4
11 7 7 7 7
5 1 4 3 2
2 8 3 8 1
10 10 3 10 3
5 6 8 7 9
1 13 1 5 5
10 5 7 2 8
10 4 4 7 4
3 5 3 12 3
2 4 7 2 2
7 7 7 12 12
9 9 9 4 4
2 13 13 4 4
8 2 2 1 5
9 2 2 6 9
10 9 9 9 10
8 6 4 2 9
6 6 12 13 13
8 3 8 3 13
6 6 6 11 11
6 7 10 4 4
6 9 4 5 6
3 3 6 3 3
11 8 8 11 11
5 5 2 5 5
1 12 2 11 11
11 1 1 5 8
9 9 8 7 11
10 8 9 6 7
13 3 9 7 13
8 7 4 7 3
13 13 13 3 13
11 6 6 11 6
9 4 9 9 9
4 4 10 10 1
10 10 10 5 5
4 13 13 13 4
8 10 10 10 10
7 7 6 7 9
2 1 4 3 5
9 9 4 10 10
4 6 4 6 6
12 12 12 10 8
13 8 7 4 13
11 6 4 9 7
10 2 10 12 12
12 12 12 13 11
12 9 1 5 11
11 2 3 7 4
13 13 13 13 4
5 8 11 8 8
3 3 3 9 7
3 3 3 2 8
2 7 13 2 2
10 8 6 7 9
9 3 9 9 9
7 9 10 8 11
8 5 8 8 8
3 7 7 4 3
2 9 3 7 13
======== EXPECT
Teste 1
151

Teste 2
163

Teste 3
0

Teste 4
173

Teste 5
0

Teste 6
0

Teste 7
164

Teste 8
189

Teste 9
148

Teste 10
181

Teste 11
201

Teste 12
3

Teste 13
149

Teste 14
141

Teste 15
171

Teste 16
0

Teste 17
164

Teste 18
2

Teste 19
147

Teste 20
161

Teste 21
182

Teste 22
163

Teste 23
204

Teste 24
0

Teste 25
61

Teste 26
202

Teste 27
145

Teste 28
1

Teste 29
0

Teste 30
181

Teste 31
169

Teste 32
207

Teste 33
181

Teste 34
144

Teste 35
0

Teste 36
203

Teste 37
148

Teste 38
0

Teste 39
162

Teste 40
203

Teste 41
187

Teste 42
201

Teste 43
8

Teste 44
170

Teste 45
205

Teste 46
37

Teste 47
0

Teste 48
144

Teste 49
143

Teste 50
142

Teste 51
167

Teste 52
169

Teste 53
67

Teste 54
2

Teste 55
51

Teste 56
169

Teste 57
0

Teste 58
71

Teste 59
50

Teste 60
166

Teste 61
4

Teste 62
6

Teste 63
183

Teste 64
171

Teste 65
185

Teste 66
11

Teste 67
1

Teste 68
9

Teste 69
206

Teste 70
13

Teste 71
7

Teste 72
193

Teste 73
166

Teste 74
189

Teste 75
58

Teste 76
170

Teste 77
173

Teste 78
190

Teste 79
147

Teste 80
201

Teste 81
68

Teste 82
166

Teste 83
152

Teste 84
13

Teste 85
0

Teste 86
76

Teste 87
152

Teste 88
0

Teste 89
0

Teste 90
193

Teste 91
148

Teste 92
143

Teste 93
143

Teste 94
142

Teste 95
206

Teste 96
189

Teste 97
207

Teste 98
188

Teste 99
47

Teste 100
0

<<<<<<<< FINISH
```
<!-- load -->
