# L0 - Dividindo: resultado e @resto

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup resto`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![Imagem Teorema da Divisão](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/resto/cover.png)

## Ação

Na cadeira de Matemática Díscreta, o professor irá apresentar o teorema da
divisão. Ele diz o seguinte:

Teorema (Algoritmo da Divisão): Seja n um inteiro qualquer e d um inteiro
positivo, existe um único par de inteiros q e r com 0 ≤ r < d tais que n =
d*q + r.

Em outras palavras, dado dois inteiros positivos, por exemplo, 115 e 15,
podemos escrever 115 = 15*7 + 10, onde 7 e 10 são o quociente e o resto da
divisão de 115 por 15.

Implemente um programa que receba dois inteiros positivos e calcule o valor do
quociente e resto da divisão do primeiro pelo segundo número.

### Entrada

- Dois inteiros, um por linha

### Saída

- Quociente e resto separados por espaço

## Exemplos

```txt
>>>>>>>> 0
51
31
========
1 20
<<<<<<<<

>>>>>>>> 1
398
50
========
7 48
<<<<<<<<

>>>>>>>> 2
350
40
========
8 30
<<<<<<<<

>>>>>>>> 3
587
460
========
1 127
<<<<<<<<

>>>>>>>> 4
215
158
========
1 57
<<<<<<<<

>>>>>>>> 5
760
360
========
2 40
<<<<<<<<

>>>>>>>> 6
498
203
========
2 92
<<<<<<<<

>>>>>>>> 7
61
25
========
2 11
<<<<<<<<

>>>>>>>> 8
32
7
========
4 4
<<<<<<<<

>>>>>>>> 9
873
254
========
3 111
<<<<<<<<

>>>>>>>> 10
689
326
========
2 37
<<<<<<<<

>>>>>>>> 11
939
155
========
6 9
<<<<<<<<

>>>>>>>> 12
302
78
========
3 68
<<<<<<<<

>>>>>>>> 13
584
318
========
1 266
<<<<<<<<

>>>>>>>> 14
899
317
========
2 265
<<<<<<<<
```
