# Quantos casais na arca

![_](assets/cover.jpg)

O dono do zoológico quer construir uma grande arca e colocar os animais dentro dela. Os animais só podem embarcar aos **pares**. Um número inteiro representa uma espécie de animal. Se esse número for **positivo**, representa um animal **macho**; se for **negativo**, representa uma **fêmea**. Um casal válido consiste em um macho e uma fêmea da mesma espécie.

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

### Entrada

- linha 1: Um número com a quantidade **'N'** de elementos do vetor (até 50).
- linha 2: O vetor **'N'** de inteiros representando as espécies dos animais.

### Saída

- A quantidade de casais formados.

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
3
1 -1 2
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1 3 2 2 -3
======== EXPECT
1
<<<<<<<< FINISH
```
<!-- load -->
