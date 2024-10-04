# L1 - @operacoes básicas

![_](cover.jpg)

## Ação

Leia dois números e imprima a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre eles respectivamente.

## Entrada

- Valores de A, B em inteiro, um por linha.

## Saída

- Valores da soma, subtração, multiplicação, divisão e resto da divisão.

- Valor da divisão deve ser em ponto flutuante de duas casas decimais.
- O valor de B nunca será 0, então não se preocupe com divisão por 0.

## Exemplos

``` py
#INPUT
1
4
#OUTPUT
5
-3
4
0.25
1
#END

#INPUT
3
3
#OUTPUT
6
0
9
1.00
0
#END
```

## Resolução

Seja a variável `valor` um número em ponto flutuante, você pode imprimir essa variável com duas casas decimais você pode fazer assim:

- C: `printf("%2.f", valor)`
- Javascript: `console.log(valor.toFixed(2))`
- Python: `print("{:.2f}".format(valor))`



[![_](video.png)](https://youtu.be/XbjHzCULmEI)
