## ©04_vetores L1 - Joelison Fernandes - Soma do maior e menor!


![](__capa.jpg)

## Motivação

A história curiosa do brasileiro Joelison Fernandes da Silva está circulando o mundo todo. O fato é que ele é simplesmente o homem mais alto do país - tem 2,23 m de altura!, e depois de uma vida cheia de bullying e dificuldades, agora está feliz por ter encontrado sua alma gêmea. Uma mulher de apenas 1.52 m.

Que história ein?

## Ação

Escreva um programa onde receba um vetor de tamanho 5 e que de como saída a soma do maior e do menor elemento deste vetor.

### Entrada

*   Um vetor possuindo 5 elementos.

### Saída

*   A soma do maior elemento com o menor.

## Exemplo

```
>>>>>>>> 01
1 2 3 4 5
========
6
<<<<<<<<

>>>>>>>> 02
3 3 1 4 6
========
7
<<<<<<<<

>>>>>>>> 03
3 2 1 4 4
========
5
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
Crie Maior = 0
Crie Menor = 100
Inicie um laço em 0 que adiciona +1 enquanto for menor que 5
  Leia auxiliar
  Se auxiliar maior que Maior
    Maior = auxiliar
  Se auxiliar menor que Menor
    Menor = auxiliar
Fim do laço
Mostre (Maior + Menor)
```
