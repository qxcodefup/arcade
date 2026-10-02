# Fazendo a peça do tetris cair

![_](assets/cover.jpg)

## Contexto

Você vai simular a queda de uma peça de Tetris. Verifique se ela pode descer uma posição sem colidir com outra peça ou com o limite inferior do display.

## Entrada e saída

### Entrada

- 1a linha: L C, sendo a quantidade de linhas e colunas do display. L, C tem valores em 1 e 20.
- As linhas seguintes contêm o display, formado pelos caracteres abaixo:
  - . representa os espaços vazios
  - o representa a peça que cai
  - \# representam as peças que estão na base

### Saída

- O resultado do display. Se a peça estiver em colisão, reimprima
o display sem alteração.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4 4
.#.#
.#o#
##o#
##o#
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
.#.#
.#o#
##o#
##o#
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4 4
ooo#
o.o#
o#o#
.#.#
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
...#
ooo#
o#o#
o#o#
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
5 5
.....
..ooo
.#..o
###..
##.##
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
.....
.....
.#ooo
###.o
##.##
</pre></td></tr>
</table>
<!-- end -->
