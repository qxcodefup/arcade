## @0058 #03_rep L2 - Busca Intervalada
## @qxcode

![Resultado de imagem para amarelinha](capa.jpg)

## Motivação

No jogo de amarelinha é necessário jogar a pedrinha no número certo. Não vale jogar no número maior nem no número menor. Pra ficar mais divertido, dois amigos decidiram reformular as regras do jogo permitindo jogar a pedrinha dentro do intervalo estabelecido. Funcionava, assim:  
  
\- "João, joga, é tua vez. Entre 6 e 8. Vai. Vai maxu! Bora miséria. Deixa de olhar o Zap carniça."  
  
Moral da história: maldito zap que não deixa mais o povo brincar de nada divertido!  

## Ação

Dado uma lista de número e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado os valores inferior e superior também fazem parte do intervalo.  

### Entrada

*   Quantidade N de elementos do vetor.
*   Limite inferior e limite superior.

*   N números inteiros.

### Saída

*   Números inteiros que estão dentro do intervalo, incluindo os limites.

### Exemplos

```
>>>>>>>>
4
1 3
1 5 3 7
========
2
<<<<<<<<

>>>>>>>>
5
3 5
1 2 4 6 8
========
1
<<<<<<<<

>>>>>>>>
4
3 5
1 2 7 8
========
0
<<<<<<<<
```

#

<!---

>>>>>>>>
4
3 5
1 2 3 4
========
2
<<<<<<<<


>>>>>>>>
6
4 8
1 4 2 7 9 3
========
2
<<<<<<<<


>>>>>>>>
10
-2 2
-4 -6 -2 -1 0 1 2 3 4 5
========
5
<<<<<<<<

--->