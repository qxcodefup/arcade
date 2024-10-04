# L3 - @mario e o Assassins Creed

## Lendo cenário

![_](cover.jpg)

## Motivação

Thaiquovisqui da Silva está fazendo um joguinho com uma mistura de Super Mário e Assassins Creed.

Nele, o Mário anda em um cenário 2D, mas ao invés de pular na cabeça dos inimigos ele mata com uma chave de fenda.  

Lembre-se que o Mário é encanador! Então isso faz todo sentido jogabilístico.

## Ação  

Faça um programa que dado um vetor de números inteiros positivos mostre o cenário que esse vetor representa.  
Um cenário é um vetor de números positivos onde o vetor representa a altura dos blocos.  
O vetor 1312 seria o seguinte cenário. (Onde não houver nada coloque  **\_**)

```txt
_#__
_#_#
####
```

E o vetor 1133464221 seria como o seguinte cenário:

```txt
_____#____
_____#____
____###___
__#####___
__#######_
##########
```

## Entrada

- A quantidade de elementos no vetor (1 à 20).  

- O vetor de números, sendo cada número entre 1 e 20.  

## Saída

- Cenário representado por  **\_**  e  **#**

## Exemplos

``` py
#INPUT
4
1 3 1 2
#OUTPUT
_#__
_#_#
####
#END

#INPUT
5
1 3 1 2 5
#OUTPUT
____#
____#
_#__#
_#_##
#####
#END

#INPUT
10
1 1 3 3 4 6 4 2 2 1
#OUTPUT
_____#____
_____#____
____###___
__#####___
__#######_
##########
#END
```
