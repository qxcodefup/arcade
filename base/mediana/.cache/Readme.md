# Calculando a mediana

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/mediana/cover.jpg)

## Motivação

O filho tirou 5 notas durante o semestre: 6, 6, 7, 7.1, 7.2  
\- Meu filho, sua média em português foi 6.7. Você tá de recuperação.  
\- Mas, mamãe, a culpa é do colégio.  
\- Como assim, do colégio?  
\- Se eles usassem a mediana ao invés da média eu tinha passado direto!

\[DS\]

Obs: NÃO use o método pronto de ordenar do PYTHON.

## Ação

O cálculo da mediana consiste em descobrir qual o valor intermediário
do vetor ORDENADO. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este é o elemento de valor intermediário. Se a quantidade de elementos for par, então a mediana é a media entre os dois elementos centrais.

Assim, você deve ordenar o vetor antes de calcular a mediana.

### Entrada

- 1° linha: A quantidade de elementos do vetor.  
- 2a linha: Os elementos em ponto flutuante de forma não ordenada.

## Saída

- O Valor da mediana com até uma casa decimal.

## Exemplos

``` py
>>>>>>>> INSERT
2
2 4
======== EXPECT
3.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
0 1 2
======== EXPECT
1.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
0 9 3.2 1
======== EXPECT
6.1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
0 2 9 8 5.1
======== EXPECT
9.0
<<<<<<<< FINISH
```
