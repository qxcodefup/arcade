# Contar repetidos

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/repetidos/cover.jpg)

## Contexto

Durante a batalha de Ultron, os Vingadores enfrentam a ameaça de robôs que estão tentando dominar o mundo. Para derrotar Ultron, os Vingadores precisam identificar quantos robôs foram criados com um determinado modelo, representado por números. Cada número no vetor corresponde a um modelo de robô.

Faça um programa que, dado um vetor, retorne quantas vezes um determinado modelo de robô se repete nele

### Entrada

- Os números (**X**, entre 0 e 9 e **N**, entre 1 e 50), representando **X** o número que corresponde ao modelo do robô procurado e **N** a quantidade de robôs no vetor.
- Linhas subsequentes: os modelos dos robôs.

### Saída

- A quantidade de vezes que o modelo aparece no vetor.

## Testes

``` py
>>>>>>>> INSERT
5 3
2
3
6
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 4
0
0
1
0
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 8
2
4
2
6
2
0
2
2
======== EXPECT
5
<<<<<<<< FINISH
```
