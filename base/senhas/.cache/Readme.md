# Algoritmo de força bruta

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/senhas/cover.jpg)

## Motivação

Todo algoritmo de força bruta exige a geração de todas as combinações possíveis para a senha. Quanto mais informação se tem sobre a senha, menor o espaço de busca a ser testado.

Seu amigo disse: Minha senha tem 2 dígitos e os únicos algarismos que podem aparecer nela são "0,1,3". Calculando todas as permutações com repetição geraria as seguintes possibilidades:

```py
00, 01, 03, 10, 11, 13, 30, 31, 33 
```

## Dica

É comum esses algoritmos de força bruta executarem por muitas horas e muitos dias. Então é importante guardar a última senha testada para no caso de ter que retornar os testes, retornar a partir do ponto que parou.

### Entrada

- 1a linha: S Q, respectivamente o tamanho da senha e a quantidade de novas senhas a serem geradas. S entre 1 e 50, Q entre 1 e 100.
- 2a linha: algarismos que podem aparecer na senha.
- 3a linha: senha de partida.

## Saída

- As Q novas senhas a serem testadas uma por linha.

## Exemplos

``` py
>>>>>>>> INSERT numerico apenas
4 10
0179
9997
======== EXPECT
9999
0000
0001
0007
0009
0010
0011
0017
0019
0070
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT misturado
3 7
#!1Ap
!#A
======== EXPECT
!#p
!!#
!!!
!!1
!!A
!!p
!1#
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT numerico invertido
4 10
0982
2222
======== EXPECT
0000
0009
0008
0002
0090
0099
0098
0092
0080
0089
<<<<<<<< FINISH
```
