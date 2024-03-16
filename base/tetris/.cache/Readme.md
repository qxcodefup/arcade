# L3 - @tetris (Fazendo a peça cair)

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/tetris/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup tetris`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tetris/cover.jpg)

## Motivação

Você com certeza já jogou tetris. Ele é o jogo mais vendido do mundo com 170 milhões de unidades. Seja no seu celular ou no mini game de 70 joguinhos em um da vovó, Tetris é imbatível.

## Ação

Você fai simular a queda de um única peça de Tetris. Verifique se a peça não está colidindo com nada e faça-a descer uma posição.

## Entrada

- 1a linha: L C, sendo a quantidade de linhas e colunas do display. L, C tem valores em 1 e 20.
- linhas seguintes, o conteúdo do display com três caracteres apenas
  - . representa os espaços vazios
  - o representa a peça que cai
  - \# representam as peças que estão na base

## Saída

- O resultado do display. Se a peça estiver em colisão, reimprima
o display sem alteração.

## Exemplos

``` txt
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
```
