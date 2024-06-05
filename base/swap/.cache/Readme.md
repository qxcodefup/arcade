# L1 - @swap - Troca de valores de variáveis

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/swap/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup swap`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/swap/cover.jpg)

## Ação

Implemente a função `troca`, que recebe como parâmetro duas variáveis inteiras passadas por referência, e troca os valores destas variáveis.


## Draft

- lib.c: arquivo que você vai implementar a função `swap`.
- main.c: arquivo já implementado que contém a função `main` que chama a função `swap`.

<!-- links .cache/draft -->
- c
  - [lib.c](https://github.com/qxcodefup/arcade/blob/master/base/swap/.cache/draft/c/lib.c)
  - [main.c](https://github.com/qxcodefup/arcade/blob/master/base/swap/.cache/draft/c/main.c)
<!-- links -->

Você deverá:

- Implementar a função 'troca'.
- Chamar a função 'troca' dentro da função 'main'.

## Exemplos

``` txt
>>>>>>>>
1 2
========
2 1
<<<<<<<<

>>>>>>>>
-1 3
========
3 -1
<<<<<<<<

>>>>>>>>
0 0
========
0 0
<<<<<<<<
```


upload:
   vpl_evaluate.sh
   vpl_cases.txt

keep:
   main.c
   data.txt

required:
   lib.c
   lib.h