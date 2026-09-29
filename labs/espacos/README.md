# Espaços duplicados

![_](assets/cover.jpg)

Crie um programa que receba um texto e remova todos os espaços duplicados que aparecerem no meio da frase, deixando apenas um espaço entre as palavras.

### Entrada

- Um texto de até **200** caracteres, contendo apenas letras minúsculas e espaços.

### Saida

- O texto corrigido, sem espaços duplicados entre as palavras.

### Restrições

- O texto terá no máximo **200** caracteres.
- A entrada conterá apenas letras minúsculas e espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>           Entrada           </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
a  almofada ta muito  fofa
</pre></td><td valign="top"><pre>
a almofada ta muito fofa
</pre></td></tr></table>

<table><tr><th><code>           Entrada           </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
ai  bb cx
</pre></td><td valign="top"><pre>
ai bb cx
</pre></td></tr></table>

<table><tr><th><code>           Entrada           </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
aiu  bbk cxmp
</pre></td><td valign="top"><pre>
aiu bbk cxmp
</pre></td></tr></table>
<!-- end -->
