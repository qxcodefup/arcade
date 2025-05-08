# Meu word QuEbRoU - formatação de case

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/word/cover.jpg)

## Motivação

O seu editor de texto deu problema. Seu orientador pediu que você formatasse toda uma seção do seu trabalho em caixa alta. Como você é um fantástico programador resolveu logo fazer algo mais completo.

## Ação

Dado um texto, formate como for pedido (M - Toda maiúscula, m - toda minuscula, p - primeira maiúscula, i - inverter case). Observe que no primeiro maiúscula deixa como minuscula palavras de tamanho 1 como os artigos 'a', 'e', 'o'.

Ignore pontuação, espaço e números.

A entrada é composta de minusculas, maiúsculas, números, pontuações e espaços simples.

### Entrada

* Texto com até 100 caracteres.
* Caracteres representando a formatação (M, m, p, i).

## Saída

* O texto formatado.

## Exemplos

``` py
>>>>>>>> INSERT
O Pato e o frango ja tao cozidos, comam!
M
======== EXPECT
O PATO E O FRANGO JA TAO COZIDOS, COMAM!
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
O Pato e o frango ja tao cozidos, comam!
m
======== EXPECT
o pato e o frango ja tao cozidos, comam!
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
O Pato e o frango ja tao cozidos, comam!
p
======== EXPECT
o Pato e o Frango Ja Tao Cozidos, Comam!
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
O Pato e o frango ja tao cozidos, comam!
i
======== EXPECT
o pATO E O FRANGO JA TAO COZIDOS, COMAM!
<<<<<<<< FINISH
```
