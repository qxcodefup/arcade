## #seleção L2 - Zerinho ou Um!

[](solver.c)
![](__capa.jpg)

## Motivação

Você já jogou zerim ou um? Aposto que sim!
Que tal implementar um código que lê os dedos e informa quem ganhou o jogo?

## Ação

Receba três valores correspondentes dos jogadores e em seguida imprima quem foi o vencedor ou se ouve empate segundo as regras do zerim ou um.

### Entrada:

* As opções dos 3 jogadores, uma por linha.

### Saída:

* O jogador (jog1, jog2, jog3) que ganhou ou "empate".

## Exemplos
```
>>>>>>>>
1
1
1
========
empate
<<<<<<<<

>>>>>>>>
0
0
1
========
jog3
<<<<<<<<

>>>>>>>>
1
0
0
========
jog1
<<<<<<<<

>>>>>>>>
1
0
1
========
jog2
<<<<<<<<
```

## Ajuda

Pseudocódigo
```
Leia primeiro_jogador
Leia segundo_jogador
Leia terceiro_jogador

Se (primeiro_jogador for diferente de segundo_jogador) e (primeiro_jogador for diferente de terceiro_jogador):
    Mostre "jog1"
Senão Se (segundo_jogador for diferente de primeiro_jogador) e (segundo_jogador for diferente de terceiro_jogador):
    Mostre "jog2"
Senão Se (terceiro_jogador for diferente de primeiro_jogador) e (terceiro_jogador for diferente de segundo_jogador):
    Mostre "jog3"
Senão:
    Mostre "empate"
```

