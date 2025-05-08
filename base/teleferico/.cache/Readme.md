# Teleférico OBI 2017 - Fase 1

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/teleferico/cover.jpg)

## Contexto

A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão tomar um teleférico para subir até o pico de uma montanha. A cabine do teleférico pode levar C pessoas no máximo, contando alunos e monitores, durante uma viagem até o pico. Por questão de segurança, tem que ter pelo menos um monitor dentro da cabine junto com os alunos. Por exemplo, se cabem C=10 pessoas na cabine e a turma tem A=20 alunos, o colégio poderia fazer três viagens: a primeira com 8 alunos e um monitor; a segunda com 6 alunos e um monitor; e a terceira com 6 alunos e um monitor. Você consegue ver que não seria possível fazer apenas duas viagens?

Dados como entrada a capacidade C da cabine e o número total A de alunos, você deve escrever um programa para calcular o número mínimo de viagens do teleférico.

### Entrada

- A primeira linha da entrada contém um inteiro C, representando a capacidade máxima da cabine.
- A segunda linha da entrada contém um inteiro A, representando o número total de alunos na turma.

### Saída

- Seu programa deve imprimir uma linha contendo um número inteiro representando o número mínimo de viagens do teleférico para levar todos os alunos até o pico da montanha.

### Restrições

- 2 ≤ C ≤ 100
- 1 ≤ A ≤ 1000

## Exemplos

``` py
>>>>>>>> INSERT
5
4
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
8
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
9
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 01
10
20
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
12
55
======== EXPECT
5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
100
87
======== EXPECT
1
<<<<<<<< FINISH
```

## Dicas

Para resolver o problema, precisamos calcular a quantidade de alunos que cabem em cada viagem, já que cada cabine deve ter pelo menos um monitor, e a capacidade da cabine será C-1 para alunos, considerando que um monitor sempre estará na cabine.

A fórmula para calcular o número de viagens é:

$$viagens = \left[\frac{A}{C-1}\right]$$

Assim, o número de viagens é o total de alunos dividido pela quantidade de espaço disponível para alunos em cada cabine.

## Resolusão

### Em C++

- [Vídeo](https://www.youtube.com/watch?v=w0oyrmeYHjY)
