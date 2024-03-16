# L2 - @pintando a casa

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/pintando/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup pintando`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pintando/cover.jpg)

[Explicação](https://youtu.be/nlgT_jAtmy4)

## Motivação

Fernando comprou uma casa triangular. Na hora de calcular a quantidade de tinta pra pintar, precisou descobrir como calcular a área de um triângulo. Deu de cara com a fórmula de Heron.

## Ação

Utilize a seguinte fórmula para calcular a área de um triângulo a partir do tamanho de seus lados.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pintando/heron.jpg)

## Entrada

- 3 lados em float, um por linha

## Saída

- Área com duas casas decimais.


## Exemplos

``` txt
>>>>>>>>
4
3
5
========
6.00
<<<<<<<<

>>>>>>>>
10
12
16
========
59.92
<<<<<<<<
```

## Dica

Para imprimir em **c ou c++** com duas casas decimais use:

```C
//c ou c++
#include <stdio.h>
float a = 4.3243255;
float b = 3.4334344;
printf("a=%.2f e b=%.3f", a, b); //a=4.32 e b=3.433
```

Para **Python**, você tem várias possibilidades.

```python
a = 4.3243255
b = 3.4334344
print("a={:.2f} e b={:.3f}".format(a, b)) //a=4.32 e b=3.433
```
[Veja outras opções na documentação oficial](https://docs.python.org/pt-br/3/tutorial/inputoutput.html#fancier-output-formatting)



[Resolução](https://youtu.be/sWg893W5r_w)
