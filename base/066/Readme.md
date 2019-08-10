## @066 #03_rep L3 - Spok Palíndromo
## @qxcode

![](__capa.jpg)

## Motivação

A bordo da Enterprise, Spok recebeu a missão de explorar novos planetas.  
Cada planeta tem um identificador(ID) único.  
Como o combustível da nave está pouco, Spok decidiu explorar apenas planetas que possuem ID palíndromo.  
Então ele pediu pra você fazer um programa que indique se determinado ID é palíndromo.  

## Ação

Fazer uma função que recebe um inteiro referente ao ID de um planeta e retorne 1 (true)  se o ID é palíndromo e 0 (false) caso contrário.

Obs.1: Faça essa questão sem usar vetores ou strings.  
Obs.2: Um número é palíndromo quando o seu inverso é igual a ele.  
Ex: 121 é palíndromo pois seu inverso é 121.

### Entrada

*   Um número inteiro que indica o ID.  

### Saída

*   1 caso ID seja palíndromo.
*   0 caso contrário.  

## Exemplo
```
>>>>>>>>
121  
========  
1
<<<<<<<<

>>>>>>>>
123  
========
0
<<<<<<<<

>>>>>>>>
121
========
1
<<<<<<<<

>>>>>>>>
122
========
0
<<<<<<<<
```

#

<!---
>>>>>>>> 01
1
========
1
<<<<<<<<

>>>>>>>> 02
11
========
1
<<<<<<<<

>>>>>>>> 03
1235321
========
1
<<<<<<<<

>>>>>>>> 04
0
========
1
<<<<<<<<

>>>>>>>> 05
2220122
========
0
<<<<<<<<
--->