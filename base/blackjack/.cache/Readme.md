# Conte as cartas no 21

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/blackjack/cover.jpg)

## Motivação

Faça um programa que conte o valor de uma mão de blackjack.  
Ela recebe um vetor de cartas e calcula usando as seguntes regras. K, Q e J valem 10 pontos. ÁS vale 11 pontos. As outras cartas valem seu próprio valor.  
Se a soma de pontos for maior que 21, o Ás passa a valer 1 ponto, diminuindo a soma total, tentando fazer o valor baixar para menos de 21.  
  
No vetor de inteiros, os valores 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.  

### Entrada

- A entrada começa informando a quantidade de elementos do vetor e é seguida pelos valores inteiros um por linha.

## Saída

- A saída deve ser um inteiro informando o valor da mão do blackjack.

## Exemplos

``` py
>>>>>>>> INSERT
2
1
13
======== EXPECT
21
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
11
13
======== EXPECT
20
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
1
1
1
======== EXPECT
13
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1
1
2
3
12
======== EXPECT
17
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1
1
2
10
12
======== EXPECT
24
<<<<<<<< FINISH
```
