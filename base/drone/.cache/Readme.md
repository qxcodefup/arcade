# Dronede Entrega - OBI 2017 - Fase 1

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/drone/cover.jpg)

## Contexto

A loja do Pará, especializada em vendas pela internet, está desenvolvendo drones para entrega de caixas com as compras dos clientes. Cada caixa tem a forma de um paralelepípedo reto retângulo (ou seja, no formato de um tijolo).

O drone entregará uma caixa de cada vez, e colocará a caixa diretamente dentro da casa do cliente, através de uma janela. Todas as janelas dos clientes têm o formato retangular e estão sempre totalmente abertas. O drone tem um aplicativo de visão computacional que calcula exatamente as dimensões H e L da janela. O drone consegue colocar a caixa através da janela somente quando uma das faces da caixa está paralela à janela, mas consegue virar e rotacionar a caixa antes de passá-la pela janela.

O aplicativo de controle do drone está quase pronto, mas falta um pequeno detalhe: um programa que, dadas as dimensões da maior janela do cliente e as dimensões da caixa que deve ser entregue, determine se o drone vai ser capaz de entregar a compra (pela janela) ou se a compra terá que ser entregue por meios normais.

### Entrada

- As primeiras três linhas contêm os valores inteiros **A**, **B**, e **C**, que representam as dimensões da caixa, em centímetros.
- As últimas duas linhas contêm os valores inteiros **H** e **L**, que representam a altura e largura da janela, em centímetros

### Saída

- O programa deve imprimir "**S**" se a caixa passa pela janela, ou "**N**" se a caixa não passa.

### Restrições

- 1 ≤ A, B, C ≤ 100
- 1 ≤ H, L ≤ 100

## Testes

```py
>>>>>>>> INSERT
30
50
80
80
60
======== EXPECT
S
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
75
100
50
100
30
======== EXPECT
N
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
20
22
5
20
10
======== EXPECT
S
<<<<<<<< FINISH

```

## Dicas

Teste todas as possíveis combinações das dimensões da caixa contra a janela. A caixa poderá passar se, ao girar suas faces, uma combinação de duas dimensões se encaixar dentro das dimensões da janela. Em outras palavras, tente encaixar cada uma das faces do paralelepípedo na janela e verifique se ela passa.

Aqui estão as 6 combinações que você pode testar:

- A e B passam pela janela.
- A e C passam pela janela.
- B e A passam pela janela.
- B e C passam pela janela.
- C e A passam pela janela.
- C e B passam pela janela.
