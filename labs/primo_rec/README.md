# Calculando se é

![Capa da atividade sobre números primos](assets/cover.jpg)

## Contexto

Dado um número inteiro `N`, determine recursivamente se ele é primo.

### Entrada

- Um número inteiro `N`.

### Saída

- Imprima `1` se `N` for primo e `0` caso contrário.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
5
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
21
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
</table>
<!-- end -->

## Orientações

Crie uma função recursiva que teste se `N` tem divisores. Encerre a busca quando encontrar um divisor ou quando já tiver testado até a raiz quadrada de `N`.
