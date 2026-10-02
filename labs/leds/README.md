# Contando luzes

![Capa ilustrada da atividade Contando luzes](assets/cover.jpg)

## Contexto

João quer montar um painel de LEDs com diversos números, mas ele não sabe quantos LEDs serão necessários para formar um número específico. Para ajudá-lo, vamos criar um programa que calcule a quantidade de LEDs necessária para exibir um número com base em uma configuração padrão de segmentos de LED.

![Representação dos segmentos usados para formar cada algarismo](assets/leds.png)

Dado o número de casos de teste e uma sequência de números inteiros, para cada número, calcule a quantidade de LEDs necessária para montá-lo com o padrão ilustrado na imagem.

### Entrada

- Um número inteiro **N** (1 ≤ N ≤ 1000), representando o número de casos de teste.
- **N** linhas, onde cada linha contém um número inteiro **V** (1 ≤ V ≤ 10¹⁰⁰), representando o valor que João deseja montar com LEDs.

### Saída

- Para cada número **V** na entrada, exiba uma linha com a quantidade de LEDs necessária para montá-lo, seguido da palavra **"leds"**.

## Restrições

- **1 ≤ N ≤ 1000**
- **1 ≤ V ≤ 10¹⁰⁰**

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
1
2
3
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2 leds
5 leds
5 leds
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
11
22
33
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
4 leds
10 leds
10 leds
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
115380
2819311
23456
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
27 leds
29 leds
25 leds
</pre></td></tr>
</table>
<!-- end -->
