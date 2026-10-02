# Calculando a mediana

![_](assets/cover.jpg)

## Contexto

O filho tirou 5 notas durante o semestre: 6, 6, 7, 7.1, 7.2
\- Meu filho, sua média em português foi 6.7. Você tá de recuperação.
\- Mas, mamãe, a culpa é do colégio.
\- Como assim, do colégio?
\- Se eles usassem a mediana ao invés da média eu tinha passado direto!

O cálculo da mediana consiste em descobrir qual o valor intermediário do vetor ORDENADO. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este é o elemento que está no meio do vetor. Se a quantidade de elementos for par, então a mediana é a media entre os dois elementos centrais.

Assim, você deve ordenar o vetor antes de calcular a mediana.

### Entrada

- 1° linha: A quantidade de elementos do vetor.
- 2a linha: Os elementos em ponto flutuante de forma não ordenada.

### Saída

- O Valor da mediana com até uma casa decimal.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
2 4
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
3.0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
0 1 2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1.0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
0 9 3.2 1
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2.1
</pre></td></tr>
</table>
<!-- end -->
