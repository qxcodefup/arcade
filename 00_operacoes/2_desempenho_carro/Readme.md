
### Motivação

![carro](https://raw.githubusercontent.com/qxcodefup/assets/master/carro.jpg)

![carro local](carro.jpg)

```c
int main(){
    int x;
    scanf("%d", &x);
    return 0;
}
```
Fernando lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o consumo de um carro em litros e pediu que você faça um programa que calcule o desempenho do motor em km por litro.

- O tempo em hora eh tempo em minutos/60
- A distancia percorrida é velocidade vezes tempo em horas
- O desempenho é distancia / consumo.

### IO

Entrada
- Velocidade em km/h
- Tempo em minutos
- Consumo em litros
Saída
- Desempenho com duas cadas decimais.

### Exemplos

```
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

>>>>>>>> moto
65
45
2.5
========
19.50
<<<<<<<<

>>>>>>>> opala
120
50
20.4
========
4.90
<<<<<<<<

```