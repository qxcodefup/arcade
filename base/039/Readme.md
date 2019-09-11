## #02_sel L3 - Mercantil V2
## @qxcode

![Silvio Santos](__capa.jpg)

## Descrição

Pedro e João foram no Silvio Santos. O programa era aquele
que o Silvio mostrava um produto do mercantil e a pessoa
que chegasse mais próximo do preço real ganhava.

Cada produto tem um valor real que nenhum dos competidores
conhece. O primeiro competidor chuta um valor. O segundo
competidor chuta se acha que o valor real é maior ou menor
que o valor chutado pelo primeiro competidor.

O objetivo do seu programa é informar quem ganhou a disputa.
Você receberá o chute do primeiro jogador, a escolha do
segundo jogador(maior ou menor) e o valor real do produto.

O primeiro jogador ganha se ele acertar na mosca ou se o
segundo errar a direção do chute.

[DS]

### Entrada:

* linha 1: o chute do Primeiro Jogador(float)
* linha 2: a escolha do Segundo Jogador(m para menor e M para maior)
* linha 3: o valor real do produto(0.01 até 1000.0)

### Saida:

*  imprima quem foi o vencedor: "primeiro" ou "segundo"

## Exemplos

```
>>>>>>>>
1.1
m
1.0
========
segundo
<<<<<<<<

>>>>>>>>
1.1
M
1.0
========
primeiro
<<<<<<<<

>>>>>>>>
0.9
M
1.0
========
segundo
<<<<<<<<

>>>>>>>>
1.3
m
2.0
========
primeiro
<<<<<<<<
```

#

