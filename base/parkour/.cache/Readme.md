# L3 - @parkour

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/parkour/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup parkour`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/parkour/cover.jpg)

## Motivação

Super Mário e Assassins Creed.

Thaiquovisqui da Silva está fazendo um joguinho com uma mistura de Super Mário e Assassins Creed.

Nele, o Mário anda em um cenário 2D, mas ao invés de pular na cabeça dos inimigos ele mata com uma chave de fenda no coração ou esmigalhando o crânio com uma chave inglesa.

Lembre-se que o Mário é encanador! Então isso faz todo sentido jogabilístico.

O problema é que o cenário não ficou legal e tem alguns locais ruins. Seja lugares altos demais que onde o Mário tem dificuldade de subir ou baixos demais que ele morre ao cair.

Mário só consegue pular até um bloco acima do nível atual, ou descer um bloco. Se a diferença entre os
níveis for maior que um bloco ele precisará fazer um movimento de parkour.

Dado um cenário, calcule quantos movimentos de parkour o Mário vai precisar para percorrer o cenário.

Um cenário é um vetor de números positivos onde o vetor representa a altura dos blocos.

O vetor 1, 1, 3, 3, 4, 6, 4, 2, 2, 1 seria como o seguinte cenário:

``` txt
_____#____
_____#____
____###___
__#####___
__#######_
##########
1133464221
```

Nele, o Mário precisa de 4 movimentos de parkour. Do 1 para o 3, do 4 para o 6, do 6 para o 4, e do 4 para o 2.

## Ação

Receba um vetor de inteiros e conte quantas vezes dois números consecutivos possuem diferença absoluta maior que 1.

## Entrada

* Quantidade de elementos do vetor (1 a 50).
* Elementos do vetor.  

## Saída

* Quantidade de movimentos de parkour.  

## Exemplos

``` txt
>>>>>>>>
5
1 2 1 2 3
========
0
<<<<<<<<

>>>>>>>>
6
4 2 5 4 5 3
========
3
<<<<<<<<

>>>>>>>>
8
1 3 5 7 6 5 4 3
========
3
<<<<<<<<

>>>>>>>>
14
4 2 5 3 6 4 3 4 3 2 3 2 3 5
========
6
<<<<<<<<
```
