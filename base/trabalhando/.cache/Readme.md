# L2 - Está @trabalhando ou não

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/trabalhando/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup trabalhando`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/trabalhando/cover.jpg)

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

``` txt
>>>>>>>>
2
12
========
NAO
<<<<<<<<

>>>>>>>>
2
7
========
NAO
<<<<<<<<

>>>>>>>>
2
13
========
NAO
<<<<<<<<

>>>>>>>>
2
14
========
SIM
<<<<<<<<

>>>>>>>>
2
18
========
NAO
<<<<<<<<

>>>>>>>>
2
17
========
SIM
<<<<<<<<

>>>>>>>>
3
17
========
SIM
<<<<<<<<

>>>>>>>>
1
9
========
NAO
<<<<<<<<

>>>>>>>>
1
14
========
NAO
<<<<<<<<

>>>>>>>>
3
19
========
NAO
<<<<<<<<

>>>>>>>> sexta 8
6
8
========
SIM
<<<<<<<<

>>>>>>>> sexta 11
6
11
========
SIM
<<<<<<<<

>>>>>>>> sexta 12
6
12
========
NAO
<<<<<<<<

>>>>>>>> sexta as 15
6
15
========
SIM
<<<<<<<<

>>>>>>>> sab 7
7
7
========
NAO
<<<<<<<<

>>>>>>>> sab 8
7
8
========
SIM
<<<<<<<<

>>>>>>>> sab 11
7
11
========
SIM
<<<<<<<<

>>>>>>>> sab 12
7
12
========
NAO
<<<<<<<<

>>>>>>>> sab as 15
7
15
========
NAO
<<<<<<<<

```
