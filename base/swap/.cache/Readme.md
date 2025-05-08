# Troca de valores de variáveis

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

``` py
>>>>>>>> INSERT
1 2
======== EXPECT
2 1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-1 3
======== EXPECT
3 -1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 0
======== EXPECT
0 0
<<<<<<<< FINISH
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