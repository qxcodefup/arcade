# Quantos casais na arca

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/casais/cover.jpg)

## Contexto

O dono do zoológico quer construir uma grande arca e colocar os animais dentro dela. Os animais só podem embarcar aos **pares**. Um número inteiro representa uma espécie de animal. Se esse número for **positivo**, representa um animal **macho**; se for **negativo**, representa uma **fêmea**. Um casal válido consiste em um macho e uma fêmea da mesma espécie.

### Estratégio

- Usando Vetores

```txt
descasados = Crie um vetor para armazenar os animais sem pares
para cada animal no zoo:
    animal = leia o valor
    Se ele tiver par na lista de descasado
        marque a posição do par no vetor com 0
        incremente a contagem de pares
    se não
        adicione esse animal na lista de descasados
```

- Usando dicionários

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

## Testes

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

```py
>>>>>>>> INSERT
10
1 9 -3 3 3 2 -1 4 -1 1
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
11
1 9 -3 3 3 2 -1 4 -3 1 -1
======== EXPECT
4
<<<<<<<< FINISH
```
