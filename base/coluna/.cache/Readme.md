# Qual a coluna de maior valor

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/coluna/cover.jpg)

## Motivação

Ygor está trabalhando em sua matriz nesse exato momento! Ele quer saber qual coluna tem seu valor maior, o valor de uma coluna é dado pela soma dos quadrados(n²) dos elementos dessa coluna, Ygor quer saber qual coluna da sua matriz possui o valor maior.

### Exemplo

```py
4 2 2
3 1 3
2 0 3
```

Na matriz acima, 3x3, onde as linhas são:0,1,2 e as colunas:0,1,2. A coluna que possui o seu valor maior é a coluna 0, pois, 4² + 3² + 2² = 29, que é a maior soma de quadrados dentre as três colunas.

## Ação

Dado um inteiro N, e uma matriz (N)X(N), determinar a coluna de valor maior.

### Entrada

1 Inteiro N.

1 Matriz (N)X(N) de Inteiros.

### Saída

A coluna que possui o valor maior.

### Restrições

Se existirem duas ou mais colunas (j), que gera o valor maior igual, considere a primeira encontrada.

### Exemplos

``` py
>>>>>>>> INSERT Teste 0
3
3 4 5
6 8 9
0 6 7
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT Teste 1
3
-7 8 10
9 2 5
6 3 5
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT Teste 2
5
3 3 3 3 4
5 6 4 8 9
2 2 1 3 7 
-5 5 4 6 4
2 3 1 0 8 10
======== EXPECT
4
<<<<<<<< FINISH
```
