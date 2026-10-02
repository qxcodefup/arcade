# Zerim ou um americano

![_](assets/cover.jpg)

## Contexto

No zerim ou um americano cada participante coloca quantos dedos quiser na roda. Um dos participantes soma os dedos e aponta para cada participante enquanto conta. Ganha aquele cujo dedo apontar no último número.

Suponha que existem 4 jogadores. O contador, o jogador 1, aponta pra cima e diz "zero", e então aponta pra si mesmo e diz "um", aponta pro jogador 2 e diz "dois", pro jogador 3 e diz "três", pro jogador 4 e diz "quatro", volta a apontar pra si e diz "cinco" e assim até que os números acabem.

### Entrada

- Os números dos 4 jogadores, um por linha.

### Saída

- "nenhum" se a soma deu 0, jog1, jog2, jog3 ou jog4.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
0
0
0
0
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
nenhum
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
0
0
2
0
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
jog2
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
2
2
2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
jog4
</pre></td></tr>
</table>
<!-- end -->
