# L1 - @operacoes básicas

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/operacoes/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup operacoes`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/operacoes/cover.jpg)

## Ação

Leia dois números e imprima a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre eles respectivamente.

## Entrada

- Valores de A, B em inteiro, um por linha.

## Saída

- Valores da soma, subtração, multiplicação, divisão e resto da divisão.

- Valor da divisão deve ser em ponto flutuante de duas casas decimais.
- O valor de B nunca será 0, então não se preocupe com divisão por 0.

## Exemplos

``` txt
>>>>>>>>
1
4
========
5
-3
4
0.25
1
<<<<<<<<

>>>>>>>>
3
3
========
6
0
9
1.00
0
<<<<<<<<
```

## Resolução

Seja a variável `valor` um número em ponto flutuante, você pode imprimir essa variável com duas casas decimais você pode fazer assim:

- C: `printf("%2.f", valor)`
- Javascript: `console.log(valor.toFixed(2))`
- Python: `print("{:.2f}".format(valor))`



[![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/operacoes/video.png)](https://youtu.be/XbjHzCULmEI)
