# Identificando um quadrado mágico

![_](assets/cover.jpg)

## Contexto

Dizemos que uma matriz quadrada inteira é um **quadrado mágico** se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais. Sua tarefa é criar um programa que, dada uma matriz de inteiros 3x3, determine se ela é um quadrado mágico ou não.

## Entrada e saída

### Entrada

- Uma matriz 3x3 de números inteiros. Cada linha da matriz será fornecida em uma nova linha de entrada, com os números separados por espaços.

### Saída

- A palavra **"sim"** se a matriz for um quadrado mágico.
- A palavra **"nao"** caso contrário.

## Restrições

- A matriz de entrada será sempre do tamanho 3x3.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1 2 3
4 5 6
7 8 9
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
nao
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2 7 6
9 5 1
4 3 8
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
sim
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
8 1 6
3 5 7
4 9 2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
sim
</pre></td></tr>
</table>
<!-- end -->
