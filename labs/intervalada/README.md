# Busca intervalada

![_](assets/cover.jpg)

## Contexto

Dado uma lista de número e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado, os valores inferior e superior também fazem parte do intervalo.

### Entrada

* 1a linha Quantidade N de elementos do vetor, Limite inferior e limite superior.
* Próximas linhas: N números inteiros.

### Saída

* Números inteiros que estão dentro do intervalo, incluindo os limites.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4 1 3
1
5
3
7
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
5 3 5
1
2
4
6
8
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4 3 5
1
2
7
8
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0
</pre></td></tr>
</table>
<!-- end -->
