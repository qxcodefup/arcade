# Viunei e a saúde mental

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/zigzag/cover.jpg)

## Contexto

Viunei, ao ver seus alunos rolando feeds sem parar enquanto esperavam o ônibus, sugeriu uma solução para melhorar a saúde mental deles. Ele contou que, quando era jovem, jogava um jogo de atenção chamado "zigzag" com seus amigos. Esse jogo estimulava as habilidades cognitivas e ajudava a superar a inatividade.

O jogo funciona de forma simples: em um grupo, os participantes contam números em sequência, mas com algumas regras divertidas para aumentar o desafio.

Dado um intervalo de números, aplique as seguintes regras de substituição:

- Se o número for divisível por 3, deve-se dizer **zig** em vez do número.
- Se o número for divisível por 5, deve-se dizer **zag** em vez do número.
- Se o número for divisível por 3 e por 5, deve-se dizer **zigzag** em vez do número.

### Entrada

- A primeira linha contém o número de início da sequência.
- A segunda linha contém o número de fim da sequência.

### Saída

- Para cada número no intervalo, imprimir:
  - O número original, se não for divisível por 3 ou 5.
  - A palavra **"zig"** se o número for divisível por 3.
  - A palavra **"zag"** se o número for divisível por 5.
  - A palavra **"zigzag"** se o número for divisível por 3 e 5.

## Testes

```py
>>>>>>>> INSERT
1
16
======== EXPECT
1
2
zig
4
zag
zig
7
8
zig
zag
11
zig
13
14
zigzag
16
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
25
35
======== EXPECT
zag
26
zig
28
29
zigzag
31
32
zig
34
zag
<<<<<<<< FINISH

```
