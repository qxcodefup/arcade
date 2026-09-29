# Soldados em Posição

![_](assets/cover.jpg)

Os soldados se posicionaram em formação no quartel, formando uma matriz. Cada soldado tem uma numeração única em sua farda. O Comandante, querendo testar sua atenção, deu a seguinte ordem: você deve contar quantas vezes um soldado com numeração menor está posicionado atrás (em uma linha abaixo) de um soldado com numeração maior, dentro da mesma coluna.

Sua tarefa é criar um programa que, dada a matriz da formação, conte o número total dessas ocorrências, analisando cada coluna verticalmente.

### Entrada

- A primeira linha contém dois números inteiros, **nl** e **nc**, representando o número de linhas e colunas da matriz.
- As **nl** linhas seguintes contêm os nc valores da matriz, que representam as numerações dos soldados.

### Saída

- Um número inteiro que representa a quantidade total de vezes que um soldado com número menor foi encontrado atrás de um soldado com número maior na mesma coluna.

### Restrições

- A verificação deve ser feita apenas verticalmente (dentro de cada coluna).

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code> Entrada </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
2 1
2
3
</pre></td><td valign="top"><pre>
0
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
2 1
4
3
</pre></td><td valign="top"><pre>
1
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
3 3
2 4 6
3 8 9
1 0 5
</pre></td><td valign="top"><pre>
3
</pre></td></tr></table>
<!-- end -->
