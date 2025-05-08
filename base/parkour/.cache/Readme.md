# Analisando vetores

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/parkour/cover.jpg)

## Contexto

Thaiquovisqui da Silva está desenvolvendo um jogo inspirado em Super Mario e Assassin's Creed.

No jogo, Mario se move em um cenário 2D. No entanto, ao invés de pular na cabeça dos inimigos, ele os elimina com uma chave de fenda ou uma chave inglesa, lembrando que ele é um encanador. O problema é que o cenário contém algumas áreas difíceis para Mario se deslocar: blocos altos demais, nos quais ele não consegue subir, e blocos baixos demais, que podem ser perigosos.

Mario consegue subir apenas um bloco acima do nível atual ou descer um bloco. Se a diferença entre os níveis for maior que um bloco, ele precisará realizar um movimento de parkour.

Um movimento de parkour ocorre sempre que Mario precisa subir ou descer mais de um bloco para continuar avançando.

O objetivo do programa é calcular quantos movimentos de parkour Mario precisa fazer para atravessar todo o cenário.

Um cenário é representado por um vetor de números positivos, onde cada valor indica a altura de um bloco.

**Ex:**

- O vetor `[1, 1, 3, 3, 4, 6, 4, 2, 2, 1]` seria como o seguinte cenário:

``` py
_____#____
_____#____
____###___
__#####___
__#######_
##########
1133464221
```

Neste exemplo, Mario precisa realizar 4 movimentos de parkour: do bloco `1` para o bloco `3`, do bloco `4` para o bloco `6`, do bloco `6` para o bloco `4`, e do bloco `4` para o bloco `2`.

### Entrada

- linha 1: A Quantidade de elementos **'N'** do vetor (1 a 50).
- linha 2: Um vetor de N inteiros positivos representando as alturas dos blocos.  

### Saída

- Um número inteiro representando a quantidade de movimentos de parkour necessários.

## Testes

```py
>>>>>>>> INSERT
5
1 2 1 2 3
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
4 2 5 4 5 3
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
8
1 3 5 7 6 5 4 3
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
14
4 2 5 3 6 4 3 4 3 2 3 2 3 5
======== EXPECT
6
<<<<<<<< FINISH
```
