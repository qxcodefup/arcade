# Formatando data

![_](assets/cover.jpg)

## Contexto

Leia a hora, o minuto, o dia, o mês e o ano e apresente-os no formato `hh:mm dd/mm/aa`. A hora, o minuto, o dia e o mês devem ocupar dois dígitos; use apenas os dois últimos dígitos do ano.

### Entrada

A entrada contém cinco números inteiros, um por linha: hora, minuto, dia, mês e ano.

### Saída

Imprima a data e a hora no formato `hh:mm dd/mm/aa`, incluindo zeros à esquerda quando necessário.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
12
12
3
1988
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
04:12 12/03/88
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
12
30
1
3
188
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
12:30 01/03/88
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
14
7
7
9
2005
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
14:07 07/09/05
</pre></td></tr>
</table>
<!-- end -->
