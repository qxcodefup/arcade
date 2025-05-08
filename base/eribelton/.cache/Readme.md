# Eribelton e a Ascologia V3 - Busca do mínimo

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/eribelton/cover.jpg)

## Ação

Diferente da versão 2 em que você ou encontrava um nome perfeito ou digitava estou sem sorte, use a mesma regra de apenas colocar um caractere minúsculo para procurar o melhor valor, mesmo que não seja zero. Se adicionando um caractere não melhorar o valor, deixe sem o caractere adicional.

### Entrada

* Uma palavra(max 50 char) com apenas minusculos e maiúsculos sem espaços.

### Saida

* 1a linha: o valor da palavra original.
* 2a linha: A nova palavra.
* 3a linha: o valor ascológico da nova palavra.

## Exemplos

``` py
>>>>>>>> INSERT
e
======== EXPECT
1
ec
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
d
======== EXPECT
0
d
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Aga
======== EXPECT
15
Agaa
12
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Rufus
======== EXPECT
33
Rufusu
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Ariates
======== EXPECT
13
Ariatesa
10
<<<<<<<< FINISH
```
