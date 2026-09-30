# Valdiskley e a cifra V1

![_](assets/cover.jpg)

Dado uma letra e um valor de rotação retorne a letra resultante. A rotação é realizada de forma circular entre as letras do alfabeto, ou seja, se a letra for 'z' e a rotação for 1, a letra resultante será 'a'. Se a letra for 'a' e a rotação for -1, a letra resultante será 'z'.

### Entrada

* Letra minuscula entre 'a' e 'z'
* Um valor inteiro positivo ou negativo onde negativo significa um rotação pra frente e negativo uma rotação pra trás.

### Saída

* A letra resultante

### Exemplos

<!-- tests tests.toml --limit 4 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a
0
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
b
3
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
e
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
z
2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
b
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
f
-3
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
c
</pre></td></tr>
</table>
<!-- end -->
