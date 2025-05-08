# Abastecimento de agua

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/agua/cover.jpg)

## Motivação

Para amenizar os efeitos da seca, o prefeito contratou uma quantidade **Q** de caminhões-pipa para abastecer uma quantidade **N** de casas em uma certa rua.

Nessa rua, as casas são todas vizinhas e são numeradas de 0,1,2...**N**\-1.  
Cada caminhão tem uma rota (ponto **A** e **B**) e uma quantidade de água **L** que deve abastecer em cada casa. Ou seja, um caminhão começa na casa **A**, e acrescenta  a quantidade **L** de água em cada casa até chegar em **B** (inclusive).

O prefeito quer saber exatamente como a distribuição de água está sendo feita, então ele pediu sua ajuda para relatar a quantidade de água de cada casa.

## Ação

Imprima o vetor com a quantidade de água que cada casa foi abastecida.

### Entrada

* **N** (quantidade de casas) e **Q** (quantidade decaminhões)

* Nas próximas **Q** linhas: o ponto **A**, **B** e a quantidade inteira **L** de água de cada caminhão.

### Saída

* Vetor com o total de água de cada casa.

## Exemplos

``` py
>>>>>>>> INSERT
5 1
0 2 1  
======== EXPECT
1 1 1 0 0
<<<<<<<< FINISH
  
>>>>>>>> INSERT
5 2
0 2 1
2 4 2
======== EXPECT
1 1 3 2 2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10 5
1 4 5
5 8 2
0 9 1
8 9 3
4 8 2
======== EXPECT
1 6 6 6 8 5 5 5 8 4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4 4
0 0 1
1 1 2
2 2 3
3 3 4  
======== EXPECT
1 2 3 4
<<<<<<<< FINISH
```
