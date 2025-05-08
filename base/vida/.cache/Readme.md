# Jogo da vida - Autômatos

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/vida/cover.jpg)

## Motivação

O objetivo dessa atividade é gerar uma nova geração do jogo da vida.

Regras:

- Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
- Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
- Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.
- Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração.

É importante entender que todos os nascimentos e mortes ocorrem simultaneamente. Juntos eles constituem uma geração ou, como podemos chamá-los, um "instante" na história da vida completa da configuração inicial.
Mais informações: Procure sobre Jogo da vida na Wikipedia

### Entrada

- NL, NC, seguida da matriz de char
- Na matriz, uma célula morta é representada com o char `.` e uma célula viva por `#`.

## Saída

- Próxima geração do jogo.

## Exemplos

``` py
>>>>>>>> INSERT
4 8
........
........
..####..
........
======== EXPECT
........
...##...
...##...
...##...
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4 8
......#.
.##...#.
.#.#..#.
..#.....
======== EXPECT
........
.##..###
.#.#....
..#.....
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
7 18
..................
.###..............
.#................
..#.............#.
..............#.#.
.....##........##.
.....##...........
======== EXPECT
..#...............
.##...............
.#.#..............
...............#..
................##
.....##........##.
.....##...........
<<<<<<<< FINISH
```
