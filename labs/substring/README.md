# Obter Substrings

![Capa ilustrada da atividade Obter Substrings](assets/cover.jpg)

## Contexto

Implemente uma função que, dada uma string, um índice inicial e uma quantidade de caracteres, retorne a substring correspondente. O índice começa em `0`. Se o índice não apontar para um caractere da string ou se a quantidade for menor ou igual a `0`, retorne uma string vazia. Retorne a quantidade solicitada ou os caracteres restantes até o fim da string, o que ocorrer primeiro.

### Entrada

- Uma String com até 100 caracteres.
- Um número inteiro representando o índice de início.
- Um número inteiro positivo representando a quantidade de caracteres desejada.

### Saída

- A substring resultante com a quantidade solicitada de caracteres ou até o fim da string. Se o índice inicial não apontar para um caractere ou a quantidade não for positiva, imprima uma linha vazia.

## Restrições

- O índice de início e a quantidade de caracteres são sempre inteiros.
- A string contém apenas caracteres alfanuméricos e espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Coralina
0
4
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Cora
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Coralina
1
4
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
oral
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Power Ranger
4
20
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
r Ranger
</pre></td></tr>
</table>
<!-- end -->
