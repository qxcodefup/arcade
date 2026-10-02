# Duplicar Palavras

![_](assets/cover.jpg)

## Contexto

Faça um programa que receba uma frase(max 100 char) e imprima a mesma frase com as palavras repetidas.

### Entrada

* A entrada é uma frase composta apenas de letras minúsculas e espaços. Não existem espaços no começo ou no final da entrada. Não aparecem dois espaços juntos.

### Saída

* A frase com as palavras repetidas.

## Exemplos
<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
ola planeta terra
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
ola ola planeta planeta terra terra
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
gosto de tomate
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
gosto gosto de de tomate tomate
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
minha ufc
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
minha minha ufc ufc
</pre></td></tr>
</table>
<!-- end -->
