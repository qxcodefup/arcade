# Formiga da bundona

## Motivação

Uma formiguinha está andando na borda de um relógio redondo analógico. Como sua dieta é muito baseada em açúcar, sua nutricionista recomendou que ela caminhasse todos os dias para emagrecer.

![formiga](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bundona/cover.jpg)

A distância entre os dois marcadores em horas consecutivas é 6 centímetros. Ou seja, se a formiga sai do ponto 12:00 e anda até 01:00, ela anda 6 centímetros, o que equivale a dizer que cada 10 min para o ponteiro das horas equivale a 1 cm. De 02:00 até 03:30 são então 9 centímetros. Para simplificar, a formiga sempre vai iniciar sua caminhada em valores múltiplos de 10 nos minutos.

Dado a posição inicial da formiga no relógio, a direção que ela está caminhado H(horário) A(Anti-horário) e quantos centímetros ela caminhou em inteiro, informe em que posição do relógio ela vai terminar sua caminhada.

### Entrada

- Posição da Hora 'H' e do Minuto 'M' que a formiga começa sua caminhada. O sentido 'S' que ela anda, sendo Horário(H) ou Anti-horário(A) e distância D caminhada em centímetros. Para simplificar, o meio dia será representado pelo horário 00:00 e não por 12:00.

## Saída

- Posição hora e minuto que ela termina sua caminhada.

## Exemplos

``` py
>>>>>>>> INSERT
00
00
H
8
======== EXPECT
01 20
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
00
10
A
74
======== EXPECT
11 50
<<<<<<<< FINISH
```
