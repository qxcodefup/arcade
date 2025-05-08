# Contando luzes

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/leds/cover.jpg)

## Contexto

João quer montar um painel de LEDs com diversos números, mas ele não sabe quantos LEDs serão necessários para formar um número específico. Para ajudá-lo, vamos criar um programa que calcule a quantidade de LEDs necessária para exibir um número com base em uma configuração padrão de segmentos de LED.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/leds/leds.png)

Dado o número de casos de teste e uma sequência de números inteiros, para cada número, calcule a quantidade de LEDs necessária para montá-lo com o padrão ilustrado na imagem.

### Entrada

- Um número inteiro **N** (1 ≤ N ≤ 1000), representando o número de casos de teste.
- **N** linhas, onde cada linha contém um número inteiro **V** (1 ≤ V ≤ 10¹⁰⁰), representando o valor que João deseja montar com LEDs.

## Saída

Para cada número **V** na entrada, exiba uma linha com a quantidade de LEDs necessária para montá-lo, seguido da palavra **"leds"**.

## Testes

```py
>>>>>>>> INSERT
3
1
2
3
======== EXPECT
2 leds
5 leds
5 leds
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
11
22
33
======== EXPECT
4 leds
10 leds
10 leds
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
115380
2819311
23456
======== EXPECT
27 leds
29 leds
25 leds
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
1234567890
======== EXPECT
49 leds
<<<<<<<< FINISH
```
