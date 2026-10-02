# Arca quantos exemplares

![_](assets/cover.jpg)

## Contexto

O dono do zoologico quer a lista de todas as espécies de animais  que existem no zoologico. Para isso ele te deu uma lista de todos os animais. Ele quer que você faça um programa que retorne uma nova lista contendo apenas um animal de cada especie. Considere que um número representa uma especie. Devolva um novo vetor, sem números repetidos e ordenado.

### Estratégia

```txt
vetor = crie um vetor para representar os animais únicos
para cada animal lido:
    se o animal não estiver no vetor
        adicione o animal no vetor
ordene o vetor
imprima o resultado
```

### Entrada

- linha 1: Um número inteiro **'N"** com a quantidade de elementos do vetor.
- linha 2: O vetor de N inteiros representando as espécies dos animais.

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
