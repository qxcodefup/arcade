# Matrizes simétricas

![_](assets/cover.jpg)

Uma matriz diz-se simétrica se coincidir com a sua transposta, ou seja, se A = AT. Faça uma função que verifique se uma matriz 3x3 é simétrica ou não. Tenha como saida a informação "nao" se não for simétrica e "sim" caso contrário.

### Entrada

* Os valores da matriz.

### Saída

* "nao" se não for simétrica e "sim caso contrário.

### Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code> Entrada </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
1 4 7
4 1 8
7 8 1
</pre></td><td valign="top"><pre>
sim
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
3 3 3
3 3 3
3 3 3
</pre></td><td valign="top"><pre>
sim
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code> Saída </code>
</th></tr><tr><td valign="top"><pre>
1 2 3
4 5 6
7 8 9
</pre></td><td valign="top"><pre>
nao
</pre></td></tr></table>
<!-- end -->
