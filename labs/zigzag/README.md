# Viunei e a saúde mental

![_](assets/cover.jpg)

## Contexto

Viunei, ao ver seus alunos rolando feeds sem parar enquanto esperavam o ônibus, sugeriu uma solução para melhorar a saúde mental deles. Ele contou que, quando era jovem, jogava um jogo de atenção chamado "zigzag" com seus amigos. Esse jogo estimulava as habilidades cognitivas e ajudava a superar a inatividade.

O jogo funciona de forma simples: em um grupo, os participantes contam números em sequência, mas com algumas regras divertidas para aumentar o desafio.

Dado um intervalo de números, aplique as seguintes regras de substituição:

- Se o número for divisível por 3, deve-se dizer **zig** em vez do número.
- Se o número for divisível por 5, deve-se dizer **zag** em vez do número.
- Se o número for divisível por 3 e por 5, deve-se dizer **zigzag** em vez do número.

### Entrada

- A primeira linha contém o número de início da sequência.
- A segunda linha contém o número de fim da sequência.

### Saída

- Para cada número no intervalo, imprimir:
  - O número original, se não for divisível por 3 ou 5.
  - A palavra **"zig"** se o número for divisível por 3.
  - A palavra **"zag"** se o número for divisível por 5.
  - A palavra **"zigzag"** se o número for divisível por 3 e 5.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
16
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
2
zig
4
zag
zig
7
8
zig
zag
11
zig
13
14
zigzag
16
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
25
35
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
zag
26
zig
28
29
zigzag
31
32
zig
34
zag
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
-78
-72
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
zig
-77
-76
zigzag
-74
-73
zig
</pre></td></tr>
</table>
<!-- end -->
