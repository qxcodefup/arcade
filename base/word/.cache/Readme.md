# L3 - MeU @word QuEbRoU - formatação de case

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/word/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup word`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/word/cover.jpg)

## Motivação

O seu editor de texto deu problema. Seu orientador pediu que você formatasse toda uma seção do seu trabalho em caixa alta. Como você é um fantástico programador resolveu logo fazer algo mais completo.

## Ação

Dado um texto, formate como for pedido (M - Toda maiúscula, m - toda minuscula, p - primeira maiúscula, i - inverter case). Observe que no primeiro maiúscula deixa como minuscula palavras de tamanho 1 como os artigos 'a', 'e', 'o'.

Ignore pontuação, espaço e números.

A entrada é composta de minusculas, maiúsculas, números, pontuações e espaços simples.

## Entrada

* Texto com até 100 caracteres.
* Caracteres representando a formatação (M, m, p, i).

## Saída

* O texto formatado.

## Exemplos

``` txt
>>>>>>>>
O Pato e o frango ja tao cozidos, comam!
M
========
O PATO E O FRANGO JA TAO COZIDOS, COMAM!
<<<<<<<<

>>>>>>>>
O Pato e o frango ja tao cozidos, comam!
m
========
o pato e o frango ja tao cozidos, comam!
<<<<<<<<

>>>>>>>>
O Pato e o frango ja tao cozidos, comam!
p
========
o Pato e o Frango Ja Tao Cozidos, Comam!
<<<<<<<<

>>>>>>>>
O Pato e o frango ja tao cozidos, comam!
i
========
o pATO E O FRANGO JA TAO COZIDOS, COMAM!
<<<<<<<<
```
