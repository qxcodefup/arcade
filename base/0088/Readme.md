S## @0088 #4_vet L4 - Se fosse a mediana eu tinha passado!
## @qxcode

![](capa.jpg)

### Motivação

O filho tirou 5 notas durante o semestre: 6, 6, 7, 7.1, 7.2  
\- Meu filho, sua média em português foi 6.7. Você tá de recuperação.  
\- Mas, mamãe, a culpa é do colégio.  
\- Como assim, do colégio?  
\- Se eles usassem a mediana ao invés da média eu tinha passado direto!

\[DS\]

##### Obs: NÃO use o método pronto de ordenar do PYTHON.

### Ação

O cálculo da mediana consiste em descobrir qual o valor intermediário
do vetor ORDENADO. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este
é o elemento de valor intermediário. Se a quantidade de elementos for par então a médiana é a media entre os dois elementos centrais.

Assim, você deve ordenar o vetor antes de calcular a mediana.

### I/0

##### Entrada: 

1° linha: A quantidade de elementos do vetor.  
2a linha: Os elementos em ponto flutuante de forma não ordenada.

##### Saída

O Valor da mediana com até uma casa decimal.

### Exemplos

```
>>>>>>>>
2
2 4
========
3.0
<<<<<<<<

>>>>>>>>
3
0 1 2
========
1.0
<<<<<<<<

>>>>>>>>
4
0 9 3.2 1
========
6.1
<<<<<<<<

>>>>>>>>
5
0 2 9 8 5.1
========
9.0
<<<<<<<<
```

<!---
>>>>>>>> 01
4
0.0 9.0 3.2 1.0
========
6.1
<<<<<<<<

>>>>>>>> 02
5
0.0 2.0 9.0 8.0 5.1
========
9.0
<<<<<<<<

>>>>>>>> 03
6
0.0 4.0 2.0 8.0 6.0 9.4
========
5.0
<<<<<<<<

>>>>>>>> 04
8
0.1 0.2 4.0 2.0 8.0 6.0 9.4 10.3
========
5.0
<<<<<<<<
--->