# L1 - @swap - Troca de valores de variáveis

![_](cover.jpg)

## Ação

Implemente a função `troca`, que recebe como parâmetro duas variáveis inteiras passadas por referência, e troca os valores destas variáveis.


## Draft

- lib.c: arquivo que você vai implementar a função `swap`.
- main.c: arquivo já implementado que contém a função `main` que chama a função `swap`.

<!-- links .cache/draft -->
- c
  - [lib.c](.cache/draft/c/lib.c)
  - [main.c](.cache/draft/c/main.c)
<!-- links -->

Você deverá:

- Implementar a função 'troca'.
- Chamar a função 'troca' dentro da função 'main'.

## Exemplos

``` py
#INPUT
1 2
#OUTPUT
2 1
#END
```

```py
#INPUT
-1 3
#OUTPUT
3 -1
#END
```

```py
#INPUT
0 0
#OUTPUT
0 0
#END
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