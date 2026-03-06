# Opala bebedor

![_](cover.jpg)

## Contexto

Um amigo lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o consumo de combustível em litros. Sua tarefa é criar um programa que calcule o desempenho do motor em km por litro.

Para isso, siga os seguintes passos:

- Converta o tempo de minutos para horas (tempo em horas = tempo em minutos / 60).
- Calcule a distância percorrida (distância = velocidade * tempo em horas).
- Calcule o desempenho final (desempenho = distância / consumo).

### Entrada

- Três números, um por linha:
  - Velocidade média em km/h.
  - Tempo da viagem em minutos.
  - Consumo de combustível em litros.

### Saída

- O desempenho do motor em km/l, com duas casas decimais.

### Restrições

- Os valores de entrada (velocidade, tempo, consumo) serão números positivos.
- O consumo será sempre maior que zero.

### Testes

``` py
>>>>>>>> INSERT corsa
100
60
10
======== EXPECT
10.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT fusca
60
40
10
======== EXPECT
4.00
<<<<<<<< FINISH
```

### Dica

Para imprimir em **c ou c++** com duas casas decimais use:

```C
//c ou c++
#include <stdio.h>
float a = 4.3243255;
float b = 3.4334344;
printf("a=%.2f e b=%.3f", a, b); //a=4.32 e b=3.433
```

Em  **Python**, você tem várias possibilidades.

```py
a = 4.3243255
b = 3.4334344
print("a={:.2f} e b={:.3f}".format(a, b)) //a=4.32 e b=3.433
```
[Veja outras opções na documentação oficial](https://docs.python.org/pt-br/3/tutorial/inputoutput.html#fancier-output-formatting)

### Resolução

[Explicação](https://youtu.be/d0nlVzjtMBE)