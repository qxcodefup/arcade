# Jogo do avesso 2

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/avesso2/cover.jpg)

## Motivação

A brincadeira do avesso funciona assim.

Tem um chefe e os operários. Os operários ficam em fila. O chefe diz o nome de um operário e os dois operários que estavam perto dele tem que trocar de posição. Se estavam em pé, ficam agachados.

## Ação

Suponha a seguinte configuração onde cada número representa uma pessoa.

\[3 4 8 9 1 5 6\] O chefe grita "4", então o "3" e o "8" se agacham.

O vetor fica assim: \[-3 4 -8 9 1 5 6\] usando o sinal negativo para representar o agachado.

Depois o chefe grita "9". O -8 e o 1 se alteram ficando assim: \[-3 4 8 9 -1 5 6\]

O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número no vetor. Se o chefe disser um número errado, ninguém deve se mexer.

\[DS\]

### Entrada

- linha 1: o tamanho N do vetor de operários(0 < N < 100) e a quantidade X de gritos do chefe( 0 < X < 100)
- linha 2: o vetor de operários, cada elemento entre (0 < 100)
- linha 3: o vetor de gritos, cada elemento entre (0 < 100)

## Saída

- o novo vetor.

## Exemplos

``` py
>>>>>>>> INSERT
3 1
3 1 4
1
======== EXPECT
[-3 1 -4]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3 3
3 1 4
1 1 4
======== EXPECT
[3 -1 4]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
7 5
3 4 8 9 1 5 6
3 4 5 6 9
======== EXPECT
[-3 -4 8 9 1 -5 -6]
<<<<<<<< FINISH
```
