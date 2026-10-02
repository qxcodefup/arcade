# Converter segundos em h:m:s

![Imagem Tempo em Horas, Minutos e Segundos](assets/cover.jpg)

## Contexto

Converta um tempo total em segundos para horas, minutos e segundos. Os minutos e segundos representam os restos após considerar as unidades maiores.

### Entrada

A entrada contém um número inteiro que representa o tempo total em segundos.

### Saída

Imprima o tempo no formato `horas:minutos:segundos`, sem exigir zeros à esquerda.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3641
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1:0:41
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
22067
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
6:7:47
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
9934
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2:45:34
</pre></td></tr>
</table>
<!-- end -->
