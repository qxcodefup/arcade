## [mat][QC0007] L4 - Tetris (Fazendo a peça cair).
## @qxcode

![](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/0007/logo.jpg)

Você com certeza já jogou tetris. Ele é o jogo mais vendido do mundo com 170 milhões de unidades. Seja no seu celular ou no mini game de 70 joguinhos em um da vovó, Tetris é imbatível.

---

Você fai simular a queda de um única peça de Tetris. Verifique se a peça não está colidindo com nada e faça-a descer uma posição.

---

Entrada
- 1a linha: L C, sendo a quantidade de linhas e colunas do display. L, C tem valores em 1 e 20.
- linhas seguintes, o conteúdo do display com três caracteres apenas
    - . representa os espaços vazios
    - o representa a peça que cai
    - \# representam as peças que estão na base

Saída
- O resultado do display. Se a peça estiver em colisão, reimprima
o display sem alteração.

---
## Testes

```
>>>>>>>> bastao parado
4 4
.#.#
.#o#
##o#
##o#
========
.#.#
.#o#
##o#
##o#
<<<<<<<<

>>>>>>>> u movel
4 4
ooo#
o.o#
o#o#
.#.#
========
...#
ooo#
o#o#
o#o#
<<<<<<<<


>>>>>>>> L descendo
5 5
.....
..ooo
.#..o
###..
##.##
========
.....
.....
.#ooo
###.o
##.##
<<<<<<<<

>>>>>>>> barra parada
5 6
......
.ooooo
.#....
.##..#
##.##.
========
......
.ooooo
.#....
.##..#
##.##.
<<<<<<<<

>>>>>>>> nave caindo
5 7
.##o.o.
.##ooo#
.#..o.#
.##..#.
##.##.#
========
.##....
.##o.o#
.#.ooo#
.##.o#.
##.##.#
<<<<<<<<
