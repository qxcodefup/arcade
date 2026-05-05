# Vivo ou Morto - OBI 2005

![_](assets/cover.jpg)

Toda criança certamente já brincou de "vivo ou morto". A brincadeira é dirigida por um "chefe" (um adulto), que comanda dois ou mais participantes (crianças). A brincadeira é composta de rodadas.

No início, os participantes são organizados pelo chefe em fila única. A cada rodada o chefe grita "vivo" ou "morto" e todos os participantes tentam seguir sua ordem, levantando-se ao ouvir a palavra "vivo" ou abaixando-se ao ouvir a palavra "morto". Um participante que não segue a ordem do chefe é eliminado, deixando o seu lugar na fila.

Os participantes remanescentes agrupam-se novamente em fila única, preenchendo as posições dos participantes eliminados, mas mantendo suas posições relativas. O jogo continua até que uma rodada seja composta por exatamente um participante. Tal participante é dito o vencedor do jogo.

Por exemplo, considere que a brincadeira inicie com cinco participantes, identificados por números inteiros de 1 a 5, e que o chefe organize a fila na ordem 3 → 2 → 1 → 4 → 5. Se na primeira rodada forem eliminados os participantes 2 e 4, a fila da segunda rodada será formada por 3 → 1 → 5; se na segunda rodada for eliminado o participante 1, a fila da terceira rodada será formada por 3 → 5. Se na terceira rodada o participante 3 for eliminado, o vencedor da brincadeira será o participante 5.  
  

Sua tarefa é escrever um programa que determine o vencedor de uma partida de "vivo ou morto", a partir da informação das ordens dadas pelo chefe e das ações executadas pelos participantes em cada rodada.  
  
### Entrada

- A entrada é constituída de vários casos de teste, cada um representando uma partida. A primeira linha de um caso de teste contém dois números inteiros P e R indicando respectivamente a quantidade inicial de participantes (2 ≤ P ≤ 100) e quantidade de rodadas da partida (1 ≤ R ≤ 100).
- Os participantes são identificados por números de 1 a P . A segunda linha de um caso de teste descreve a fila organizada pelo chefe, contendo P números inteiros distintos x1 , x2 , . . . xP , onde x1 representa o identificador do participante no primeiro lugar na fila, x2 representa o identificador do participante no segundo lugar na fila, e assim por diante (1 ≤ xi ≤ P ).
- Cada uma das R linhas seguintes representa uma rodada, contendo um número inteiro inteiro N indicando o número de participantes da rodada (2 ≤ N ≤ P ), um número inteiro inteiro J representando a ordem dada pelo chefe (0 ≤ J ≤ 1) e N números inteiros Ai representando a ação do participante colocado na i-ésima posição na fila (0 ≤ Ai ≤ 1).
- Ordens e ações "vivo" são representadas pelo valor 1, ordens e ações "morto" pelo valor zero. Cada partida tem exatamente um vencedor, determinado somente na última rodada fornecida no caso de teste correspondente. O final da entrada é indicado por P = R = 0.
- A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).  
  
### Saída

- Para cada caso de teste seu programa deve produzir três linhas. A primeira identifica o conjunto de teste no formato "Teste n", onde n é numerado a partir de 1. A segunda linha deve conter o identificador do vencedor. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.  
- A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).  
  
Olimpíada Brasileira de Informática - OBI2005 - Modalidade Programação Nível 2  
  
## Restrições

```py
2 ≤ P ≤ 100 (P = 0 apenas para indicar o fim da entrada)  
1 ≤ R ≤ 100 (R = 0 apenas para indicar o fim da entrada)  
1 ≤ xi ≤ P , para 1 ≤ i ≤ P  
2≤N ≤P  
0≤J ≤1  
0 ≤ Ai ≤ 1, para 1 ≤ i ≤ N
```

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
5 4
3 2 1 4 5
5 1 1 1 1 1 1
5 0 0 1 0 1 0
3 0 0 1 0
2 1 0 1
5 4
3 2 1 4 5
5 1 1 1 1 1 1
5 0 0 1 0 1 0
3 0 0 1 0
2 1 1 0
2 2
2 1
2 1 1 1
2 1 1 0
0 0
======== EXPECT
Teste 1
5
Teste 2
3
Teste 3
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10 7
5 6 1 8 10 4 2 7 9 3
10 1 1 1 0 1 1 1 1 1 1 1
9 1 1 1 0 1 1 1 1 1 0
7 1 0 0 1 1 1 1 1
5 1 1 0 1 1 1
4 1 1 1 1 1
4 0 0 1 0 0
3 1 1 0 0
8 8
6 2 3 4 8 1 5 7
8 1 1 0 1 1 1 1 1 1
7 1 1 1 1 1 1 1 1
7 0 0 0 0 0 0 0 0
7 1 1 1 1 1 1 1 1
7 1 1 0 1 1 1 1 1
6 1 1 1 0 0 1 1
4 0 0 0 0 0
4 1 0 0 0 1
10 10
3 5 1 7 4 8 2 9 10 6
10 1 1 1 1 1 1 1 1 1 1 1
10 0 0 0 0 0 0 0 1 0 0 0
9 0 0 0 0 0 0 0 0 1 0
8 1 1 1 1 1 1 0 0 1
6 1 1 1 1 1 1 1
6 0 0 0 0 1 0 0
5 0 0 0 0 0 0
5 0 1 0 0 0 0
4 0 0 0 0 0
4 1 0 1 0 0
0 0
======== EXPECT
Teste 1
10
Teste 2
7
Teste 3
1
<<<<<<<< FINISH
```
<!-- load -->
