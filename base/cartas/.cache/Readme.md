# L2 - @cartas - Transformando números em letras

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/cartas/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup cartas`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

## Imprimir vetor formatado

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/cartas/cover.jpg)

## Ação

Leia um vetor contendo uma mão de cartas e mostre as cartas para o usuário.

As cartas estão codificadas da seguinte forma. O 1 vale A, os valores 11, 12 e 13 valem respectivamente J, Q e K.

## Entrada

- 1ª linha: 'N' quantidade de cartas na mão
- 2ª linha: 'N' valores representando as cartas do usuário.

## Saída

- Vetor formatado entre [ ], separados por ' , '.

## Exemplos

``` txt
>>>>>>>>
0
========
[]
<<<<<<<<

>>>>>>>>
13
1 2 3 4 5 6 7 8 9 10 11 12 13
========
[A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K]
<<<<<<<<

>>>>>>>>
4
1 1 3 13
========
[A, A, 3, K]
<<<<<<<<

>>>>>>>>
6
1 12 13 1 1 10
========
[A, Q, K, A, A, 10]
<<<<<<<<

>>>>>>>>
6
10 10 2 2 11 1
========
[10, 10, 2, 2, J, A]
<<<<<<<<
```
