# L4 - A @porta Matemática

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/porta/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup porta`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/porta/cover.jpg)

## Motivação

Pedrinho precisa encontrar a sua sala onde terá sua aula de matemática.

Disseram para Pedrinho: A sala de matemática tem em sua porta um número de identificação, que misteriosamente se altera conforme as portas que estão próximas a ela, mas segue sempre uma regra: a porta matemática é aquela que possui dentre as outras, o número que gera a maior sequência da conjectura de collatz e que é um quadrado perfeito.

Pedrinho tem uma sequência de números de possíveis portas, ajude ele a identificar a porta matemática. Observações:

- Quadrado Perfeito: [Saiba
sobre](https://www.todamateria.com.br/quadrado-perfeito)
- Conjectura de Collatz: [Saiba
sobre](https://pt.wikipedia.org/wiki/Conjectura_de_Collatz)

### Ação

Faça um programa que dado um conjunto de portas retorne a porta matemática.

## Entrada

- 1 Inteiro N seguido de N Inteiros.

## Saída

- O número que representa a porta matemática.
- Ou \"a porta nao existe\", caso a porta não exista

### Exemplos

``` txt
>>>>>>>>
6
1 2 4 7 8 5
========
4
<<<<<<<<

>>>>>>>>
2
49 81
========
49
<<<<<<<<

>>>>>>>>
2
5 6
========
a porta nao existe
<<<<<<<<
```
