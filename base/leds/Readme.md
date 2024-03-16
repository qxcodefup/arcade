# L2 - Contar @leds

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/leds/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup leds`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/leds/cover.jpg)

## Motivação

João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado.
  
## Ação

Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/leds/leds.png)

## Entrada

* A entrada contém um inteiro **N**, (1 ≤ N ≤ 1000), correspondente ao número de casos de teste, seguido de **N** linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

## Saída

* Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".  

Agradecimentos a Cassio F.

[https://www.urionlinejudge.com.br/judge/pt/problems/view/1168](https://www.urionlinejudge.com.br/judge/pt/problems/view/1168)
  
## Exemplos

``` txt
>>>>>>>>
3
1
2
3
========
2 leds
5 leds
5 leds
<<<<<<<<

>>>>>>>>
3
11
22
33
========
4 leds
10 leds
10 leds
<<<<<<<<

>>>>>>>>
3
115380
2819311
23456
========
27 leds
29 leds
25 leds
<<<<<<<<

>>>>>>>>
1
1234567890
========
49 leds
<<<<<<<<
```
