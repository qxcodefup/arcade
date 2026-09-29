# Está contido

![_](assets/cover.jpg)

Dados dois vetores, verifique se o primeiro está contido no segundo.

Descubra se o vetor `vetor1` está contido em `vetor2` e retorne **"sim"** se isso ocorrer.

### Entrada

- linha 1: Número de elementos **N** do primeiro vetor (1 a 50) seguido dos **N** elementos.  
- linha 2: Número de elementos **M** do segundo vetor(1 a 50) seguido dos **M** elementos.

### Saída

- **"sim"** se o primeiro está condido no segundo.
- **"não"** caso contrário.

  
## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>     Entrada     </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
2 1 3
3 1 5 3
</pre></td><td valign="top"><pre>
sim
</pre></td></tr></table>

<table><tr><th><code>     Entrada     </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
2 1 3
3 6 5 3
</pre></td><td valign="top"><pre>
nao
</pre></td></tr></table>

<table><tr><th><code>     Entrada     </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
3 1 3 2
6 1 5 3 6 8 2
</pre></td><td valign="top"><pre>
sim
</pre></td></tr></table>
<!-- end -->
