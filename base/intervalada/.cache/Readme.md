# Busca intervalada

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/intervalada/cover.jpg)

## Motivação

No jogo de amarelinha é necessário jogar a pedrinha no número certo. Não vale jogar no número maior nem no número menor. Pra ficar mais divertido, dois amigos decidiram reformular as regras do jogo permitindo jogar a pedrinha dentro do intervalo estabelecido. Funcionava, assim:  
  
\- "João, joga, é tua vez. Entre 6 e 8. Vai. Vai maxu! Bora miséria. Deixa de olhar o Zap carniça."  
  
Moral da história: maldito zap que não deixa mais o povo brincar de nada divertido!  

## Ação

Dado uma lista de número e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado os valores inferior e superior também fazem parte do intervalo.  

### Entrada

* 1a linha Quantidade N de elementos do vetor, Limite inferior e limite superior.
* Próximas linhas: N números inteiros.

## Saída

* Números inteiros que estão dentro do intervalo, incluindo os limites.

### Exemplos

``` py
>>>>>>>> INSERT
4 1 3
1
5
3
7
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5 3 5
1
2
4
6
8
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4 3 5
1
2
7
8
======== EXPECT
0
<<<<<<<< FINISH
```
