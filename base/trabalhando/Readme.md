# L2 - @trabalhando - semana e sábado

![_](cover.jpg)

## Motivação

Um funcionário trabalha de segunda a sexta, de 8 até 11 e de
14 até 17. Às 17 é pra ele ainda estar trabalhando!
No sábado ele trabalha apenas de 8 até 11.

Faça um código que lê o dia da semana e a hora e informa ao chefe se ainda é para funcionário estar trabalhando!

## Entrada

- 1a linha: o dia da semana (1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB).
- 2a linha: um inteiro representando hora.

## Saída

- Deve ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.

## Exemplos

``` py
#INPUT
2
12
#OUTPUT
NAO
#END

#INPUT
2
7
#OUTPUT
NAO
#END

#INPUT
2
13
#OUTPUT
NAO
#END

#INPUT
2
14
#OUTPUT
SIM
#END

#INPUT
2
18
#OUTPUT
NAO
#END

#INPUT
2
17
#OUTPUT
SIM
#END

#INPUT
3
17
#OUTPUT
SIM
#END

#INPUT
1
9
#OUTPUT
NAO
#END

#INPUT
1
14
#OUTPUT
NAO
#END

#INPUT
3
19
#OUTPUT
NAO
#END

#INPUT sexta 8
6
8
#OUTPUT
SIM
#END

#INPUT sexta 11
6
11
#OUTPUT
SIM
#END

#INPUT sexta 12
6
12
#OUTPUT
NAO
#END

#INPUT sexta as 15
6
15
#OUTPUT
SIM
#END

#INPUT sab 7
7
7
#OUTPUT
NAO
#END

#INPUT sab 8
7
8
#OUTPUT
SIM
#END

#INPUT sab 11
7
11
#OUTPUT
SIM
#END

#INPUT sab 12
7
12
#OUTPUT
NAO
#END

#INPUT sab as 15
7
15
#OUTPUT
NAO
#END

```
