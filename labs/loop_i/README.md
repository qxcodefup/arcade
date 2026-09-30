# Treino de loop

![_](assets/cover.jpg)

Muitas vezes precisamos imprimir uma sequência de números inteiros dentro de um intervalo, excluindo o valor de limite superior. Esse exercício vai te ajudar a praticar o uso de loops para imprimir valores entre dois números.

Dado dois números inteiros **A** e **B**, faça um loop para imprimir todos os números inteiros entre **A** e **B**, excluindo **B**.

### Entrada

- A primeira linha contém o número inteiro **A**.
- A segunda linha contém o número inteiro **B**.

### Saída

- Imprima todos os números inteiros de **A** até **B-1**, um por linha.

### Retrições

- **A** será sempre menor ou igual a **B**.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
10
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
2
3
4
5
6
7
8
9
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
10
14
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
10
11
12
13
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
-5
0
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
-5
-4
-3
-2
-1
</pre></td></tr>
</table>
<!-- end -->
