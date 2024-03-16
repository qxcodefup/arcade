# L2 - Achando @carteira - Retirando os loops

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/carteira/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup carteira`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/carteira/cover.jpg)

## Motivação

- Aline: Ei André, minha vida deu uma volta de 360 graus.
- André: Vai pro colégio não tu? 360 graus volta pro mesmo lugar.
- Aline: Eu sei, é porque eu achei na rua uma carteira sem nenhum documento e cheia de dinheiro.
- André: Então é 180 graus, mulher, tu agora tá estribada.
- Aline: Não, é 360 mesmo, eu levei a carteira pra casa.
- André: E?????
- Aline: Descobri que era do meu pai.

---

## Ação

![angulos](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/carteira/angulos.png)

Nosso sistema de ângulos no plano cartesiano é definido em graus. O ângulo 0 aponta para esquerda, o 90 aponta para cima, o 180 para direita e por aí vai. O 360 graus equivale voltar ao 0.

Seu objetivo é transformar os ângulos para recolocá-los dentro do cartesiano. O ângulo 361 equivale ao 1. Ângulos negativos equivalem a andar no sentido horário. Por exemplo, -1 equivale ao 355.

Você deve ler o ângulo e imprimir o valor correto dele dentro do cartesiano entre 0 e 355.

## Exemplos

``` txt
>>>>>>>> 01
0
========
0
<<<<<<<<

>>>>>>>> 02
360
========
0
<<<<<<<<

>>>>>>>> 03
361
========
1
<<<<<<<<

>>>>>>>> 04
722
========
2
<<<<<<<<

>>>>>>>> 05
-2
========
358
<<<<<<<<

>>>>>>>> 06
-350
========
10
<<<<<<<<
```
