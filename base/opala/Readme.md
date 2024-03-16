# L2 - @opala bebedor

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/opala/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup opala`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/opala/cover.jpg)

[Explicação](https://youtu.be/d0nlVzjtMBE)

## Ação

Um amigo lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o consumo de um carro em litros e pediu que você faça um programa que calcule o desempenho do motor em km por litro.

## Dica

- O tempo em hora eh tempo em minutos/60
- A distancia percorrida é velocidade vezes tempo em horas
- O desempenho é distancia / consumo.

## Entrada

- Velocidade em km/h
- Tempo em minutos
- Consumo em litros

## Saída

- Desempenho com duas cadas decimais.

## Exemplos

``` txt
>>>>>>>> corsa
100
60
10
========
10.00
<<<<<<<<

>>>>>>>> fusca
60
40
10
========
4.00
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

Em  **Python**, você tem várias possibilidades.

```python
a = 4.3243255
b = 3.4334344
print("a={:.2f} e b={:.3f}".format(a, b)) //a=4.32 e b=3.433
```
[Veja outras opções na documentação oficial](https://docs.python.org/pt-br/3/tutorial/inputoutput.html#fancier-output-formatting)

