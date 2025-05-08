# Subdiagonais de uma matriz

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/subdiagonais/cover.jpg)

## Motivação

A diagonal principal de uma matriz **A** é a coleção das entradas **A** i,j em que **i** é igual a **j**. A diagonal principal de uma matriz quadrada une o seu canto superior esquerdo ao canto inferior direito e a diagonal secundária une os demais cantos. Por exemplo, na matriz a seguir todos os elementos da diagonal principal são iguais a 1:

![_](https://wikimedia.org/api/rest_v1/media/math/render/svg/03b7d8ebcd29f3c1e9379f6aad400bd89aa8eaa7)

## Ação

Em uma matriz de elementos inteiros 5x5, some todos os elementos da diagonal principal e subtraia da soma dos elementos da diagonal secundária.

### Entrada

* Os valores da matriz.

## Saída

* A soma dos elementos da diagonal principal menos a soma dos elementos da diagonal secundária.

## Exemplos

``` py
>>>>>>>> INSERT
1 0 1 1 0
0 1 1 1 1
0 0 1 0 0
1 1 1 0 0
1 0 1 1 1
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1 1 0 0 1
1 1 1 0 0
1 0 0 1 1
0 1 1 1 1
0 0 0 1 1
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 4 6 3 9
8 7 5 4 1
5 2 6 1 7
8 4 3 2 5
9 7 6 5 3
======== EXPECT
-12
<<<<<<<< FINISH
```
