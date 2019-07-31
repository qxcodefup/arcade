## @0182 #07_struct L3 - Mulher mais idosa
## @qxcode

![](capa.jpg)

## Ação

Leia um grupo de pessoas e informe o nome da mulher mais idosa do grupo.

Cada pessoa tem nome(string até 20 char, sem whitespace), idade(int) e sexo(char 'm' ou 'f').

### Entrada

- 1a linha: o número de pessoas, seguido por uma pessoa por linha.

### Saída

- O nome da mulher mais idosa, ou 'nao ha mulher' se não houverem mulheres no grupo.

## Orientações

Antes e fazer a busca pela mulher mais idosa, você deve ler os dados e armazená-los em um vetor de struct.

## Exemplos

```
>>>>>>>> 01
2
ana 80 f
joao 43 m
========
ana
<<<<<<<<

>>>>>>>> 02
2
jose 80 m
joao 43 m
========
nao tem mulher
<<<<<<<<

>>>>>>>> 03
3
joao 43 m
ana 80 f
melissa 34 f
========
ana
<<<<<<<<

>>>>>>>> 04
3
joao 88 m
ana 80 f
melissa 84 f
========
melissa
<<<<<<<<
```

#

<!---

>>>>>>>> 05
3
joao 88 m
ferrim 80 m
melios 84 m
========
nao tem mulher
<<<<<<<<


>>>>>>>> 06
7
maria 11 f
joao 43 m
francisco 12 m
meire 71 f
sergio 14 m
strange 81 m
mogli 45 m
========
meire
<<<<<<<<


>>>>>>>> 07
6
maria 11 f
joao 43 m
francisco 12 m
meire 71 f
strange 81 m
sergio 101 m
========
meire
<<<<<<<<


>>>>>>>> 08
5
maria 99 f
strange 81 m
joao 43 m
meire 71 f
sergio 14 m
========
maria
<<<<<<<<


>>>>>>>> 09
7
mario 80 m
joao 43 m
francisco 12 m
meire 73 f
sergio 72 f
strange 81 m
mogli 45 m
========
meire
<<<<<<<<

--->
