## #repetição L3 - Spok Palíndromo


![](__capa.jpg)

## Motivação

A bordo da Enterprise, Spok recebeu a missão de explorar novos planetas.  
Cada planeta tem um identificador(ID) único.  
Como o combustível da nave está pouco, Spok decidiu explorar apenas planetas que possuem ID palíndromo.  
Então ele pediu pra você fazer um programa que indique se determinado ID é palíndromo.  

## Ação

Fazer uma função que recebe um inteiro referente ao ID de um planeta e retorne 1 (true)  se o ID é palíndromo e 0 (false) caso contrário.

1ª Obs: Faça essa questão sem usar vetores ou strings.  

2ª Obs: Um número é `palíndromo` quando o seu inverso é igual a ele. 
Por exemplo: 121 é palíndromo pois seu inverso é 121.

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
```

## Ajuda

- O operador `%` (lê-se mod) retorna o resto da divisão de um número pelo outro. Exemplo:
```
5 % 3 retorna 2, ou seja, o resto da divisão de 5 por 3 é 2

4 % 2 retorna 0, ou seja, o resto da divisão de 4 por 2 é 0
```

- Você pode usar as operações de módulo e divisão para decompor o número. Com os dígitos "arrancados", você pode formar um novo número utilizando multiplicação e soma. Por exemplo:

```
54321 % 10 retorna 1, ou seja, o primeiro digito mais a direita

54321 % 100 retorna 21, ou seja, os dois digitos mais a direita
```

```
54321 / 10 retorna 5432, ou seja, o número retirando o primeiro digito mais a direita

54321 / 100 retorna 543, ou seja, o número retirando os dois digitos mais a direita

54321 / 100000 retorna 0, ou seja, o número retirando os cinco digitos mais a direta
```

```
2 * 10 + 1, caso queira formar o número 21         

21 * 10 + 15, caso queira formar o número 225
```

Pseudocódigo
```
Ler numero
novo = 0

Enquanto (num > 0):
    dig = num % 10
    num = num / 10
    novo = novo * 10 + dig

Mostrar (novo)
```
