# L2 - @teleferico - OBI 2017 - Fase 1

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/teleferico/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup teleferico`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/teleferico/cover.jpg)

## Motivação

A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão tomar um teleférico para subir até o pico de uma montanha. A cabine do teleférico pode levar C pessoas no máximo, contando alunos e monitores, durante uma viagem até o pico. Por questão de segurança, tem que ter pelo menos um monitor dentro da cabine junto com os alunos. Por exemplo, se cabem C=10 pessoas na cabine e a turma tem A=20 alunos, o colégio poderia fazer três viagens: a primeira com 8 alunos e um monitor; a segunda com 6 alunos e um monitor; e a terceira com 6 alunos e um monitor. Você consegue ver que não seria possível fazer apenas duas viagens?

Dados como entrada a capacidade C da cabine e o número total A de alunos, você deve escrever um programa para calcular o número mínimo de viagens do teleférico.

## Entrada

- A primeira linha da entrada contém um inteiro C, representando a capacidade da cabine. A segunda linha da entrada contém um inteiro A, representando o número total de alunos na turma.

## Saída

- Seu programa deve imprimir uma linha contendo um número inteiro representando o número mínimo de viagens do teleférico para levar todos os alunos até o pico da montanha.

## Restrições

- 2 ≤ C ≤ 100 e 1 ≤ A ≤ 1000

## Solução

[Vídeo](https://www.youtube.com/watch?v=w0oyrmeYHjY)

## Exemplos

``` txt
>>>>>>>>
5
4
========
1
<<<<<<<<

>>>>>>>>
5
8
========
2
<<<<<<<<

>>>>>>>>
5
9
========
3
<<<<<<<<


>>>>>>>> 01
10
20
========
3
<<<<<<<<

>>>>>>>> 02
12
55
========
5
<<<<<<<<

>>>>>>>> 03
100
87
========
1
<<<<<<<<
```
