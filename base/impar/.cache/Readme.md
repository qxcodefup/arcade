# Ímpar ou par - OBI 2016 - F1P1

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/impar/cover.jpg)

## Contexto

Dois amigos, Alice e Bob, estão jogando um jogo muito simples, em que um deles grita ou "par" ou "ímpar" e o outro imediatamente responde ao contrário, respectivamente "ímpar" ou "par". Em seguida, ambos exibem ao mesmo tempo uma mão cada um, em que alguns dedos estão estendidos e outros dobrados. Então eles contam o número total de dedos estendidos. Se a soma for par, quem gritou "par" ganha. Se a soma for ímpar, quem gritou "ímpar" ganha.

 Por exemplo, suponhamos que a Alice gritou "par" e o Bob respondeu "ímpar". Em seguida, Alice não deixou nenhum dos seus dedos estendidos, ao passo que Bob deixou três dedos estendidos. A soma então é três, que é ímpar, portanto Bob ganhou.

Seu programa deve determinar quem ganhou, tendo a informação de quem gritou par e o número de dedos estendidos de cada um.

### Entrada

- Três linhas, onde:
  - A primeira linha contém um inteiro ***P*** (0 ou 1):
    - ***P = 0***: Alice gritou "par"
    - ***P = 1***: Bob gritou "par"
  - A segunda linha contém um inteiro ***D1***: número de dedos estendidos por Alice
  - A segunda linha contém um inteiro ***D1***: número de dedos estendidos por Bob

### Saída

- Um único inteiro:
  - 0 se Alice foi a ganhadora
  - 1 se Bob foi o ganhador

### Restrições

- P = 0 ou P = 1
- 0 ≤ D\_1 ≤ 5
- 0 ≤ D\_2 ≤ 5

## Testes

``` py
>>>>>>>> INSERT
0
0
3
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
0
3
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
1
5
======== EXPECT
0
<<<<<<<< FINISH
```
