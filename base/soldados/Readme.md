# L2 - @soldados em Posição

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/soldados/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup soldados`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/soldados/cover.jpg)

## Motivação

Os soldados se colocaram em formação no quartel. Na formação, eles formaram uma matriz 3x3.

Cada soldado tem uma numeração na sua farda, logo o Comandante querendo tripudiar de você, mandou você contar quantas vezes um soldado com numeração de fardamento menor está atrás de um maior.

## Ação

Faça um programa que conte quantos soldados com numeração de fardamento menor está atrás de um maior.

**Obs**: Você tem que conferir as numerações verticalmente.

## Entrada

* Uma matriz de tamanho qualquer contendo os valores que representam os soldados.
  * linha 1: nl e nc
  * linhas seguintes a matriz

Saída

* Quantas vezes foram encontrados.

## Exemplos

``` txt
>>>>>>>>
2 1
2
3
========
0
<<<<<<<<

>>>>>>>>
2 1
4
3
========
1
<<<<<<<<

>>>>>>>>
3 3
2 4 6
3 8 9
1 0 5
========
3
<<<<<<<<

>>>>>>>>
3 3
5 1 9
3 8 4
7 3 2
========
4
<<<<<<<<

>>>>>>>>
3 3
6 2 3
5 4 9
1 8 7
========
3
<<<<<<<<

>>>>>>>>
4 4
6 2 3 5
5 4 9 4
1 8 7 3
1 8 9 2
========
6
<<<<<<<<

>>>>>>>>
5 4
6 2 3 5
5 4 9 4
1 8 7 3
1 8 9 2
0 7 9 1
========
9
<<<<<<<<

```
