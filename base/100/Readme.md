## ©04_vetores L3 - Jogando pião na rodinha


![](__capa.jpg)

## Motivação

No jogo de pião lá de Ocara, o mói de peia dos `baitinga*` funciona assim:
- N jogadores se reúnem cada um com seu pião.
- Um rapaz faz uma linha na areia.
- Todos os participantes jogam o pião tentando acertar o pião na linha.
- O jogador cuja jogada for superior a 50 cm de distância da linha será desclassificado.
- Quem ficou mais perto da linha ganha, desde que esteja dentro do limite.
- Quem ficou mais longe da linha leva uma mói de peia, mesmo que esteja no limite.

### Entrada

- 1a linha: N a quantidade de jogadores.

- 2a linha: As N jogadas dos jogadores em centímetros, sendo um número positivo indicando que caiu à direita da linha e um número negativo para indicar que caiu à esquerda da linha..

### Saída

- 1a linha: o número do ganhador (1o jogador tem índice 0).
    - "nenhum" se nenhum conseguiu acertar dentro do limite.
    - se houver empate, o último a jogar será o ganhador.
- 2a linha: o número do perdedor
    - o perdedor será quem jogou mais longe do centro.
    - se houver empate, será o último jogador empatado, na ordem das jogadas.

## Exemplos

```
>>>>>>>> 01
30 3
35 15 22
========
1
0
<<<<<<<<

>>>>>>>> 02
30 3
35 32 40
========
nenhum
2
<<<<<<<<

>>>>>>>> 03
30 3
35 36 36
========
nenhum
2
<<<<<<<<

>>>>>>>> 04
30 3
25 26 24
========
2
1
<<<<<<<<
```


* baitinga: modo carinhoso que um cearense chama o outro quando está invocado!
