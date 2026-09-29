# Obter Substrings

![_](assets/cover.jpg)

Implemente uma função que, dada uma string, um índice de início e uma quantidade de caracteres, retorne a substring correspondente. Se o índice ou a quantidade de caracteres forem inválidos, retorne uma string vazia. A função deve retornar exatamente a quantidade de caracteres solicitada ou até o fim da string, o que ocorrer primeiro.

### Entrada

- Uma String com até 100 caracteres.
- Um número inteiro representando o índice de início.
- Um número inteiro representando a quantidade de caracteres desejada.

### Saída

- A substring resultante com o número de caracteres pedidos ou uma string vazia caso o índice inicial ou a quantidade de caracteres seja inválida.

### Restrições

- O índice de início e a quantidade de caracteres são sempre inteiros.
- A string contém apenas caracteres alfanuméricos e espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>    Entrada    </code>
</th><th><code>   Saída   </code>
</th></tr><tr><td valign="top"><pre>
Coralina
0
4
</pre></td><td valign="top"><pre>
Cora
</pre></td></tr></table>

<table><tr><th><code>    Entrada    </code>
</th><th><code>   Saída   </code>
</th></tr><tr><td valign="top"><pre>
Coralina
1
4
</pre></td><td valign="top"><pre>
oral
</pre></td></tr></table>

<table><tr><th><code>    Entrada    </code>
</th><th><code>   Saída   </code>
</th></tr><tr><td valign="top"><pre>
Power Ranger
4
20
</pre></td><td valign="top"><pre>
r Ranger
</pre></td></tr></table>
<!-- end -->
