# Critério para triângulos

![_](assets/cover.jpg)

## Contexto

Você encontrou três varetas de tamanhos distintos no chão de casa e decidiu tentar formar um triângulo com elas. Para que isso seja possível, é necessário que nenhuma das varetas seja maior que a soma das outras duas. Então, você precisa determinar se as varetas podem formar um triângulo.

Leia os comprimentos das três varetas e verifique se é possível formar um triângulo com elas, seguindo o critério da soma dos lados.

### Entrada

- 3 valores inteiros, representando os tamanhos das varetas, cada um em uma linha.

### Saída

- Use "True" (verdadeiro) ou "False" (falso), indicando se é possível formar um triângulo com as varetas.

## Exemplos

<!-- tests tests.toml --limit 4 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
7
18
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
False
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
16
14
16
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
True
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
7
13
10
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
True
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
3
8
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
False
</pre></td></tr>
</table>
<!-- end -->
