# Arca quantos exemplares

![_](assets/cover.jpg)

## Contexto

O dono do zoológico quer a lista de todas as espécies que existem no zoológico. Para isso, ele forneceu uma lista de animais e pediu uma nova lista com apenas um exemplar de cada espécie. Cada espécie é representada por um número. A lista final deve estar ordenada e não pode conter números repetidos.

## Orientações

```txt
unicos = crie um mapa para representar as espécies únicas
para cada animal lido:
    se o animal não estiver em unicos
        adicione o animal em unicos
gere um vetor de unicos
ordene o vetor
imprima o resultado
```

## Entrada e saída

### Entrada

- Linha 1: um inteiro `N`, a quantidade de animais.
- Linha 2: `N` inteiros representando as espécies.

### Saída

- O novo vetor ordenado contendo um exemplar de cada elemento.

## Restrições

- Não utilize funções de ordenação prontas.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
1 1 2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1 2
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
5
1 3 2 2 3
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1 2 3
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
8
1 9 3 3 3 2 1 4
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1 2 3 4 9
</pre></td></tr>
</table>
<!-- end -->
