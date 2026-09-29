# Torre - OBI 2015 - Fase 2 - Nível 1

![_](assets/cover.jpg)

Dada uma matriz quadrada M de números naturais, o índice i de uma certa linha e o índice j de uma certa coluna, vamos definir o peso do cruzamento da linha i com a coluna j, como sendo a soma de todos os elementos que estejam na linha i ou na coluna j, mas não nas duas. Quer dizer, excluindo o elemento que está exatamente no cruzamento! Neste problema, você deve descobrir qual é o peso mínimo entre todos os possíveis cruzamentos da matriz!

No jogo de xadrez, a torre é uma peça que pode se mover para qualquer outra posição do tabuleiro na linha ou na coluna da posição que ela ocupa. O professor Paulo está tentando inventar um novo tipo de jogo de xadrez onde todas as peças são torres, o tabuleiro também é quadrado mas pode ter qualquer dimensão e cada posição do tabuleiro é anotada com um número inteiro positivo, como na figura abaixo.

Ele definiu o peso de uma posição (i,j) como sendo a soma de todos os números que estejam na linha i com todos os números da coluna j, mas sem somar o número que está exatamente na posição (i,j). Quer dizer, se uma torre estiver na posição (i,j), o peso da posição é a soma de todas as posições que essa torre poderia atacar.

O professor Paulo está solicitando a sua ajuda para implementar um programa que determine qual é o peso máximo entre todas as posições do tabuleiro.

No exemplo da figura acima, com um tabuleiro de dimensão seis (ou seja, seis linhas por seis colunas), o peso máximo é 67, referente à posição (4,4).

### Entrada

- A primeira linha da entrada contém um inteiro **N**, representando a dimensão do tabuleiro.

- Cada uma das N linhas seguintes contém **N** inteiros positivos **X\_i**, definindo os números em cada posição do tabuleiro.

### Saída

- Seu programa deve produzir uma única linha, contendo um único inteiro, o peso máximo entre todas as posições do tabuleiro.

### Restrições

- 3 ≤ N ≤ 1000
- 0 < X\_i ≤ 100

### Informações sobre a pontuação

- Em um conjunto de casos de teste cuja soma é 60 pontos, N ≤ 300.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>             Entrada             </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
6
4 1 3 8 4 5
9 2 8 9 2 7
5 5 4 3 2 5
8 2 9 1 9 8
7 1 3 2 1 2
5 1 2 9 3 8
</pre></td><td valign="top"><pre>
67
</pre></td></tr></table>

<table><tr><th><code>             Entrada             </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
3
5 1 1
5 2 1
8 5 5
</pre></td><td valign="top"><pre>
20
</pre></td></tr></table>

<table><tr><th><code>             Entrada             </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
10
97 98 4 18 54 71 43 16 77 33
96 62 53 23 70 66 18 55 16 87
26 65 47 85 49 31 80 66 34 86
26 15 24 8 96 12 6 69 69 60
33 10 52 6 63 20 19 56 75 80
3 69 85 89 6 50 38 51 67 16
36 76 50 43 60 75 89 16 1 1
32 24 96 14 20 19 78 94 23 69
36 48 46 67 91 5 97 64 56 74
83 88 100 23 79 57 55 45 12 57
</pre></td><td valign="top"><pre>
1060
</pre></td></tr></table>
<!-- end -->
