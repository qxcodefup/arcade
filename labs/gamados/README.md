# Verificar ordenação da frase

![Capa ilustrada da atividade Verificar ordenação da frase](assets/cover.jpg)

## Contexto

Sua tarefa é verificar se as palavras em uma frase estão em ordem alfabética (lexicográfica). Imprima `sim` quando cada palavra for igual ou vier depois da anterior na ordem lexicográfica; caso contrário, imprima `nao`.

### Entrada

- Uma frase de até **100** caracteres, contendo apenas letras minúsculas, sem acentos e espaços.

### Saída

- A palavra **"sim"** se a frase estiver ordenada lexicograficamente.
- A palavra **"nao"** caso contrário.

## Restrições

- A entrada conterá apenas letras minúsculas e espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a amora azul
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
sim
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
o rato roeu a roupa
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
nao
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a b c d e f
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
sim
</pre></td></tr>
</table>
<!-- end -->
