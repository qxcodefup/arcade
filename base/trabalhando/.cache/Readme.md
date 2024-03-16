# L2 - Está @trabalhando ou não

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/trabalhando/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup trabalhando`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/trabalhando/cover.jpg)

## Motivação

Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de
14 até 17:59. Às 17:59 é pra ele ainda estar trabalhando!
No sábado ele trabalha apenas de 8 até 11:59.

O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você
fazer um código que lê o dia da semana, a hora e o minuto e informa ao chefe se ainda é pro funcionário estar trabalhando!

## Entrada

- É formada por um dia inteiro representando o dia (1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB) e mais dois inteiros representando hora e minuto, um por linha.

## Saída

- Deve ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.

## Exemplos

``` txt
>>>>>>>>
2
12
20
========
NAO
<<<<<<<<

>>>>>>>>
1
05
02
========
NAO
<<<<<<<<

>>>>>>>>
3
19
19
========
NAO
<<<<<<<<
```
