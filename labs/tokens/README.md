# Separando a partir de tokens

![_](assets/cover.jpg)

## Contexto

Dada uma frase (max 100 char) com palavras (letras minusculas), números e espaço, divida os elementos em n frases usando os tokens ' # ' e ' ; ' como referência de fim para aquela frase.

### Entrada

* Uma frase (max 100 char) com palavras (letras minusculas), números e espaços que podem ser separados por tokens.

### Saída

* n frases sem os tokens.

## Exemplos
<!-- tests tests.toml --limit 4 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
mamae me ama#15#1.76;
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
mamae me ama
15
1.76
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
aa 4#1 -f; -2.0;
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
aa 4
1 -f
 -2.0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
coca zero;1.75#8;U;
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
coca zero
1.75
8
U
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
jtkmht 3767 xocdgq 66;97664;szvogcw
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
jtkmht 3767 xocdgq 66
97664
szvogcw
</pre></td></tr>
</table>
<!-- end -->
