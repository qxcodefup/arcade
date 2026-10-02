# Eribelton e a Ascologia V3 - Busca do mínimo

![Capa ilustrada da atividade Eribelton e a Ascologia](assets/cover.jpg)

## Contexto

Eribelton continua sua jornada no misterioso campo da Ascologia, a ciência que estuda o valor oculto das palavras. Diferente da versão 2, onde o objetivo era encontrar a combinação perfeita que resultasse em um valor zero, a busca agora é pela melhora, não pela perfeição.

O valor ascológico de uma palavra é a soma dos valores numéricos dos seus caracteres, considerando o valor Unicode de cada letra, módulo `50`. Sua tarefa é testar a adição de cada letra minúscula de `a` a `z` ao final da palavra e escolher a que resultar no menor valor. Se nenhuma letra reduzir o valor original, mantenha a palavra inalterada. Em caso de empate entre candidatas, escolha a primeira letra em ordem alfabética.

### Entrada

- Uma palavra de até **50** caracteres, contendo apenas letras minúsculas e maiúsculas, sem espaços.

### Saída

- **1ª linha:** o valor ascológico da palavra original.
- **2ª linha:** a nova palavra (com a letra que resultou no menor valor, ou a original se não houver melhora).
- **3ª linha:** o valor ascológico da nova palavra.

## Restrições

- A palavra terá no máximo **50** caracteres.
- A busca pela letra de menor valor deve ser feita apenas com caracteres minúsculos ('a' a 'z').

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
e
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
ec
0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
d
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0
d
0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Aga
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
15
Agaa
12
</pre></td></tr>
</table>
<!-- end -->
