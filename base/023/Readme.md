## #seleção L3 - Jokenpo das tartarugas!


![](__capa.jpg)

## Motivação

Você está tentando ensinar sua tartaruga RUFUS a jogar jokenpo.

Faça uma função que retorne o resultado do jogo pedra, papel e tesoura para que RUFUS tenha algo divertido para fazer durante os seus banhos de sol no açude do Cedro.

## Ação

Receba as duas opções do jogadores e informe quem ganhou a partida.
Os jogadores podem escolher entre R(rock), P(paper) e S(scissor), que correspondem ao nosso pedra, papel e tesoura.

### Entrada:

* 1a linha: opção do jogador 1.
* 2a linha: opção do jogador 2.

### Saída:

* O jogador que ganhou ou empate (jog1, jog2, empate).

### Exemplos

```
>>>>>>>> 01
R
P
========
jog2
<<<<<<<<

>>>>>>>> 02
P
P
========
empate
<<<<<<<<

>>>>>>>> 03
S
P
========
jog1
<<<<<<<<
```

## Ajuda
#### 1º Pseudocódigo
```
  Leia opção1 
  Leia opção2
  Se opção1 for igual a opção2
  Mostre empate
  Senão se (opçao1 for igual a pedra e opção2 igual a tesoura)
  OU (opçao1 for igual a papel e opção2 igual a pedra)
  OU (opçao1 for igual a tesoura e opção2 igual a papel)
  Modestre jog1
  Senão
  Mostre jog2
```
