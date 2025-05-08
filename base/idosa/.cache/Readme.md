# Mulher mais idosa

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/idosa/cover.jpg)

## Ação

Leia um grupo de pessoas e informe o nome da mulher mais idosa do grupo.

Cada pessoa tem nome(string até 20 char, sem whitespace), idade(int) e sexo(char 'm' ou 'f').

### Entrada

- 1a linha: o número de pessoas, seguido por uma pessoa por linha.

## Saída

- O nome da mulher mais idosa, ou 'nao ha mulher' se não houverem mulheres no grupo.

## Orientações

Antes e fazer a busca pela mulher mais idosa, você deve ler os dados e armazená-los em um vetor de struct.

## Exemplos

``` py
>>>>>>>> INSERT 01
2
ana 80 f
joao 43 m
======== EXPECT
ana
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
2
jose 80 m
joao 43 m
======== EXPECT
nao tem mulher
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
3
joao 43 m
ana 80 f
melissa 34 f
======== EXPECT
ana
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 04
3
joao 88 m
ana 80 f
melissa 84 f
======== EXPECT
melissa
<<<<<<<< FINISH
```
