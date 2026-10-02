# Atbash e Valdiskley

![_](assets/cover.jpg)

## Contexto

Valdiskley está apaixonado por criptografia. Descobriu que codificar uma cifra genérica pode executar várias das antigas cifras históricas.

Vamos fazer uma cifra de substituição genérica. Voce recebe um texto claro e duas palavras de cifragem. Se o caractere do texto claro estiver na palavra de cifragem 1, você deve substitui-lo pelo caractere correspondente da palavra de cifragem 2.

Exemplo. word1 = "abcdefghijlm" word2 = "nopqrtuvwxyz"

Ou seja, todo 'a' do texto deve ser trocado por 'n', e todo 'n' por 'a' Todo 'h' deve ser trocado por 'v', todo 'z' por 'm', etc.

texto "minha chinela" output "zwavn pvwaryn"

Observe que em word1 podem aparecer pontuação, numeros, etc. Se word1 = "123!\*ov" e word2 = "456?-ai" todo '!' vira '?' e vice versa.

### Entrada

* linha 1: minusculos, numeros e pontuacao.
* linha 2: palavra1 de cifragem.
* linha 3: palavra2 de cifragem.

### Saída

* o resultado da criptografia.

## Exemplos
<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Opa amigo xarles 2o
a
x
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Opx xmigo axrles 2o
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
minha chinela
abcdefghijlm
nopqrtuvwxyz
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
zwavn pvwaryn
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
aquoso estrela
aeios
43102
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
4qu020 32tr3l4
</pre></td></tr>
</table>
<!-- end -->
