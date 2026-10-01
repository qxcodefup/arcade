# Quantos casais na arca

![_](assets/cover.jpg)

## Contexto

O dono do zoológico quer construir uma grande arca e colocar os animais dentro dela. Os animais só podem embarcar aos **pares**. Um número inteiro representa uma espécie de animal. Se esse número for **positivo**, representa um animal **macho**; se for **negativo**, representa uma **fêmea**. Um casal válido consiste em um macho e uma fêmea da mesma espécie.

## Orientações

```txt
descasados = Crie dicionário[int]int para armazenar a quantidade de elementos daquele tipo descasados
para cada animal no zoo:
    animal = leia o valor
    Se ele tiver par disponível na no mapa de descasados
        decremente o valor no mapa
        incremente a contagem de pares
    se não
        adicione esse animal no mapa ou incremente seu valor de 1
```

## Entrada e saída

### Entrada

- Linha 1: um inteiro `N`, a quantidade de animais (até 50).
- Linha 2: `N` inteiros representando as espécies e o sexo dos animais.

### Saída

- A quantidade de casais formados.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->
