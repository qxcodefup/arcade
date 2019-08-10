## @075 #04_vet L3 - Abastecimento de água
## @qxcode

![](__capa.jpg)

## Motivação

Para amenizar os efeitos da seca, o prefeito contratou uma quantidade **Q** de caminhões-pipa para abastecer uma quantidade **N** de casas em uma certa rua.

Nessa rua, as casas são todas vizinhas e são numeradas de 0,1,2...**N**\-1.  
Cada caminhão tem uma rota (ponto **A** e **B**) e uma quantidade de água **L** que deve abastecer em cada casa. Ou seja, um caminhão começa na casa **A**, e acrescenta  a quantidade **L** de água em cada casa até chegar em **B** (inclusive).

O prefeito quer saber exatamente como a distribuição de água está sendo feita, então ele pediu sua ajuda para relatar a quantidade de água de cada casa.

## Ação

Imprima o vetor com a quantidade de água que cada casa foi abastecida.

### Entrada

*   **N** (quantidade de casas) e **Q** (quantidade decaminhões)
    
*   Nas próximas **Q** linhas: o ponto **A**, **B** e a quantidade inteira **L** de água de cada caminhão.

### Saída

*   Vetor com o total de água de cada casa.

## Exemplos

```
>>>>>>>>
5 1
0 2 1  
========
1 1 1 0 0
<<<<<<<<
  
>>>>>>>>
5 2
0 2 1
2 4 2
========
1 1 3 2 2
<<<<<<<<

>>>>>>>>
10 5
1 4 5
5 8 2
0 9 1
8 9 3
4 8 2
========
1 6 6 6 8 5 5 5 8 4
<<<<<<<<

>>>>>>>>
4 4
0 0 1
1 1 2
2 2 3
3 3 4  
========
1 2 3 4
<<<<<<<<
```

#

<!---
>>>>>>>> 01
5 1
0 4 50
========
50 50 50 50 50
<<<<<<<<

>>>>>>>> 02
6 6
0 5 1
1 5 1
2 5 1
3 5 1
4 5 1
5 5 1
========
1 2 3 4 5 6
<<<<<<<<

>>>>>>>> 03
20 6
1 19 5
7 12 10
0 3 30
8 19 3
0 2 8
6 9 4
========
38 43 43 35 5 5 9 19 22 22 18 18 18 8 8 8 8 8 8 8
<<<<<<<<

>>>>>>>> 04
10 15
1 3 13
4 5 30
0 3 20
0 0 5
8 9 27
3 8 12
3 9 25
6 7 2
2 3 13
4 7 8
6 6 7
1 5 4
4 8 2
5 9 17
0 3 8
========
33 45 58 95 81 98 73 66 83 69
<<<<<<<<
--->