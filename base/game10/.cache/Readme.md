# L2 - @game10 - OBI 2017 - Fase 1 - Universitário

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/game10/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup game10`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/game10/cover.jpg)

## Motivação

No princípio dos anos 1980 surgiram nos colégios os primeiros relógios de pulso digitais com joguinhos. Era uma febre entre os alunos e quem tinha um era muito popular na hora do recreio. Os joguinhos eram bem simples, mas muito legais. Um dos primeiros era o Game-10, no qual você controlava um avião que aparecia na parte direita do visor. Na parte esquerda aparecia um disco voador em qualquer uma de três posições, aleatoriamente, e lançava um míssil. O objetivo do jogador era movimentar o avião verticalmente para que ficasse na frente do disco voador (na mesma linha horizontal, do lado direito) e atirar para interceptar o míssil antes que esse atingisse o avião.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/game10/figura.jpg)

Como o movimento do avião era feito com apenas um botão, só dava para movimentar em um sentido: ao apertar o botão sucessivas vezes, o avião se movia na sequência de posições ... 1 → 2 → 3 → 1 → 2 → 3 → 1 ...

Veja que, na situação da figura, o jogador deveria apertar o botão apenas uma vez, para ir da posição 1 para a posição 2, e conseguir atirar e interceptar o míssil.

Neste problema vamos considerar que existem N posições e não apenas três. Dado o número de posições N, a posição D na qual o disco voador aparece, e a posição A onde está o avião, seu programa deve computar o número mínimo de vezes que o jogador precisa apertar o botão para movimentar o avião até a mesma posição do disco voador e poder atirar!

## Entrada

- A primeira linha da entrada contém um inteiro N, o número de posições. A segunda linha contém um inteiro D, a posição do disco voador. A terceira linha contém um inteiro A, a posição do avião.

## Saída

- Seu programa deve imprimir uma linha contendo um inteiro, o número mínimo de vezes que o jogador deve apertar o botão para poder atirar.

## Restrições

- 3 ≤ N ≤ 100
- 1 ≤ D,A ≤ N

## Exemplos

``` txt
>>>>>>>>
3
2
1
========
1
<<<<<<<<

>>>>>>>>
20
8
13
========
15
<<<<<<<<

>>>>>>>>
3
2
2
========
0
<<<<<<<<
```
