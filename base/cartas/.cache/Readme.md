# - Transformando números em letras

## Imprimir vetor formatado

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/cartas/cover.jpg)

## Contexto

Você está jogando um jogo de cartas com seus amigos e, ao olhar para sua mão, percebe que os números das cartas estão codificados. Querendo saber quais cartas realmente possui, você decide converter esses números em letras e ver sua mão de forma clara.

No jogo:

- O número **1** corresponde à carta **"A"** (Ás).
- Os números **11**, **12** e **13** correspondem às cartas **"J"**, **"Q"** e **"K"** (Valete, Rainha e Rei), respectivamente.
- Os outros números permanecem os mesmos.

Leia um vetor contendo a mão de cartas de um jogador e mostre as cartas para o usuário de forma legível, substituindo os números especiais **(1, 11, 12, 13)** por suas respectivas letras.

### Entrada

- A primeira linha contém um número inteiro **N** (0 ≤ N ≤ 13) representando a quantidade de cartas na mão.
- A segunda linha contém **N** números inteiros representando as cartas do jogador, separados por espaço. Os valores estão entre **1** e **13**.

### Saída

- Imprima o vetor das cartas formatado entre colchetes `[ ]`, onde cada carta é separada por uma vírgula e um espaço. Substitua os números **1**, **11**, **12** e **13** por **"A"**, **"J"**, **"Q"** e **"K"**, respectivamente.

### Restrições

- O número de cartas **N** estará entre 0 e 13.
- Os valores das cartas estarão entre 1 e 13.

## Testes

```py
>>>>>>>> INSERT
0
======== EXPECT
[]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
13
1 2 3 4 5 6 7 8 9 10 11 12 13
======== EXPECT
[A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
1 1 3 13
======== EXPECT
[A, A, 3, K]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
1 12 13 1 1 10
======== EXPECT
[A, Q, K, A, A, 10]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
10 10 2 2 11 1
======== EXPECT
[10, 10, 2, 2, J, A]
<<<<<<<< FINISH
```
