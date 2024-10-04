# L3 - @eribelton e a Ascologia V3 - Busca do mínimo

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
#INPUT
e
#OUTPUT
1
ec
0
#END
```

```py
#INPUT
d
#OUTPUT
0
d
0
#END
```

```py
#INPUT
Aga
#OUTPUT
15
Agaa
12
#END
```

```py
#INPUT
Rufus
#OUTPUT
33
Rufusu
0
#END
```

```py
#INPUT
Ariates
#OUTPUT
13
Ariatesa
10
#END
```
