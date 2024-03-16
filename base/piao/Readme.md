# L3 - @piao perto da linha

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/piao/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup piao`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/piao/cover.jpg)

## Motivação

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/piao/jogo.png)

No jogo de pião lá de Ocara, o mói de peia dos `baitinga` funciona assim:

- N jogadores se reúnem cada um com seu pião.
- Um rapaz faz uma 3 linhas na areia. Uma linha alvo(azul) e duas linhas limite(verde).
- Todos os participantes jogam o pião tentando colocar o pião o mais próximo possível da linha azul.
- Quem ficou mais perto da linha ganha, desde que esteja dentro do limite.
- Quem ficou mais longe da linha leva uma peia.

## Entrada

- 1a linha: a distancia L entre a linha alvo e as linhas limite e a quantidade N de jogadores.

- 2a linha: As N jogadas dos jogadores em centímetros. Um valor 0 significa que o pião está na linha alvo. Um valor positivo indica que ele passou da linha alvo e um valor negativo indica que ele caiu antes da linha alvo.

No exemplo da figura, se o limite for 20 cm, P1 tem valor 10, P2 tem valor -10 e P3 tem valor 25.

## Saída

- 1a linha: o número do ganhador (1o jogador tem índice 0).
  - "nenhum" se nenhum conseguiu acertar dentro dos limite.
  - se houver empate, o último a jogar será o ganhador.
- 2a linha: o número do perdedor.
  - o perdedor será quem jogou mais longe do alvo.
  - se houver empate, será o último jogador empatado, na ordem das jogadas.

## Exemplos

``` txt
>>>>>>>> 01
30 3
35 -15 22
========
1
0
<<<<<<<<

>>>>>>>> 02
30 3
35 -32 -40
========
nenhum
2
<<<<<<<<

>>>>>>>> 03
30 3
35 36 -36
========
nenhum
2
<<<<<<<<

>>>>>>>> 04
40 3
-25 -26 24
========
2
1
<<<<<<<<
```

- baitinga: modo carinhoso que um cearense chama o outro quando está invocado!
