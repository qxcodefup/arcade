## @077 #04_vet L3 - Mercantil V3
## @qxcode

![](__capa.jpg)

## Motivação

Essa é a segunda versão do jogo do Mercantil.

Pedro e João foram no Sílvio Santos. O programa era aquele  
que o Sílvio mostrava um produto do mercantil e a pessoa  
que chegasse mais próximo do preço real ganhava.

João e Pedro são concorrentes.  
O objetivo do seu programa é informar quem ganhou a disputa.

Nessa versão, o primeiro jogador informa o preço e o segundo jogador informa maior ou menor.  
Quem vencer mais disputas ganha o jogo.  
Se o valor do produto for igual ao chute, ganha o primeiro  
concorrente.

Se ambos vencerem a mesma quantidade então acontece o empate.

### Entrada

*   1ª linha: a quantidade de produtos.  
*   2ª linha: o valor dos produtos.
*   3ª linha: os chutes do primeiro (float).
*   4ª linha: as escolhas do segundo (m para menor, M para maior).  

### Saída

*   Resultado do jogo ("primeiro" ou "segundo" ou "empate").

## Exemplos  

```
>>>>>>>>
1  
1.0  
1.0  
M  
========
primeiro
<<<<<<<<

>>>>>>>>
2  
1.0 2.0  
1.0 2.1  
m m  
========
empate
<<<<<<<<

>>>>>>>>  
2
1.0 2.0
1.0 2.1
m M
========
primeiro
<<<<<<<<

>>>>>>>>
2
1.0 2.0
1.1 2.1
m M
========
empate
<<<<<<<<

>>>>>>>>
3
1.0 2.0 4.0
1.1 2.1 4.0
m M m
========
primeiro
<<<<<<<<

>>>>>>>>
3
1.0 2.0 4.02
1.1 2.1 4.1
M m m
========
segundo
<<<<<<<<
```

#

