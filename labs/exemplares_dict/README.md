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
<!-- end -->
