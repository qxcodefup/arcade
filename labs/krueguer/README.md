# Krueguer e Jason - Busca de maior ocorrência

![_](assets/cover.jpg)

Sua tarefa é criar um programa que, dada uma string, encontre e retorne a subsequência com a maior quantidade de vogais consecutivas.

### Entrada

- A primeira linha contém um número inteiro **N**, a quantidade de casos de teste.
- As **N** linhas seguintes contêm uma frase para cada caso de teste.

### Saida

- Para cada caso de teste, retorne uma linha contendo o subtexto com a maior sequência de vogais. Se houver empate no tamanho, retorne a sequência que aparece primeiro no texto.

### Restrições

- **1 ≤ N ≤ 50**
- A frase de cada caso de teste terá no máximo **50** caracteres e conterá apenas letras minúsculas.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
aeb
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
ae
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
aebeiocdu
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
eio
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
abdeiuofaoi
xaeioux
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
eiuo
aeiou
</pre></td></tr>
</table>
<!-- end -->
