# Formatando data

![_](assets/cover.jpg)

Os formatos de data e hora são diversos. Sua tarefa é criar um programa que leia hora, minuto, dia, mês e ano e imprima no formato `hh:mm dd/mm/aa`. Você deve se certificar de imprimir um 0 à esquerda para garantir que todas as informações (hora, minuto, dia, mês) tenham 2 dígitos e que o ano seja representado apenas pelos seus dois últimos dígitos.

### Entrada

- Cinco números inteiros, um por linha: hora, minuto, dia, mês e ano.

### Saída

- A data e hora formatadas no padrão `hh:mm dd/mm/aa`.

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
