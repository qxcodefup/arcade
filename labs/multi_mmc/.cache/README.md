# MMC de vários Números

## Contexto

Implemente uma função `mmc(numbers []int) int` que receba um vetor de inteiros e retorne o MMC dos números.

### Entrada

* Linha 1: Um número N (N < 50)
* Linha 2: N números inteiros.

### Saída

* O mmc dos N numeros.

<!-- REVIEW_NOTE: O primeiro caso de tests.toml indica 30 para os valores 2, 5, 4 e 6, cujo MMC é 60; a saída do caso também contém instruções de mutação. Mantida a implementação conforme o contrato matemático. -->

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
2 5 4 6
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
30
<<<<<<<< FINISH<

>>>>>>>> INSERT
3
5 2 4
======== EXPECT
20
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
4 8 10 15
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
120
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
5 2 4
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
20
</pre></td></tr>
</table>
<!-- end -->
