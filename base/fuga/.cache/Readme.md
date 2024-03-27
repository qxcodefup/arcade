# L2 - @fuga em helicóptero - OBI 2016

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/fuga/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup fuga`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

<!-- toch -->
[Entrada](#entrada) | [Saída](#saída) | [Restrições](#restrições) | [Exemplos](#exemplos)
-- | -- | -- | --
<!-- toch -->

Um fugitivo, um helicóptero e um policial estão em posições distintas numa pista circular, exatamente como a mostrada na figura ao lado, com dezesseis posições numeradas de 0 a 15 em direção anti-horária.

O helicóptero e o policial ficam sempre parados. O objetivo do fugitivo é chegar no helicóptero sem passar pelo policial antes, claro. Ele pode decidir correr na direção horária, ou na direção anti-horária.

Neste problema, dadas as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo decide correr, seu programa deve dizer se ele vai ou não conseguir fugir! Na figura, se o fugitivo decidir correr na direção horária, ele consegue fugir; se decidir correr na direção anti-horária, ele vai ser preso antes de chegar no helicóptero!

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/fuga/cover.jpg)

## Entrada

- A entrada consiste de uma linha com quatro inteiros: H, P, F e D, representando, respectivamente, as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo corre, -1 para horário e 1 para anti-horário.

## Saída

- Seu programa deve imprimir uma linha contendo o caracter "S" se o fugitivo consegue fugir, ou "N" caso contrário.

## Restrições

- Os inteiros H, P e F são distintos e estão entre 0 e 15, inclusive.

## Exemplos

``` txt
>>>>>>>>
4 14 7 -1
========
S
<<<<<<<<

>>>>>>>>
4 14 7 1
========
N
<<<<<<<<

>>>>>>>>
15 9 8 -1
========
S
<<<<<<<<

>>>>>>>>
0 14 15 -1
========
N
<<<<<<<<
```
