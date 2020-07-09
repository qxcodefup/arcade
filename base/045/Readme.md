## ©03_repetição L1 - Zero é par - Somatório de Pares!


![](__capa.jpg)

## Motivação

* Pai, a tia falou que na arca de noé os animais entravam aos pares. O que é pares papai?
* Pares são números que formam um casalzinho. Tipo 2 passarinhos. Mas também vale pra vários pares tipo 4, 6, 8, 10, etc.
* Papai, e se não tiver nenhum passarinho pra botar na arca, 0 é par?

## Ação

Some todos os números inteiros pares que estão entre A e B, inclusive A e B.

## Zero é par?

Descubra em http://www.profcardy.com/cardicas/tirateima.php?id=1

### Entrada

* Dois números inteiros A e B, sendo B maior ou igual à A.

### Saída

* A soma de todos os números pares ou invalido caso A seja maior que B.

## Exemplos
```
>>>>>>>>
1
10
========
30
<<<<<<<<

>>>>>>>>
1
5
========
6
<<<<<<<<

>>>>>>>>
5
1
========
invalido
<<<<<<<<

>>>>>>>>
6
6
========
6
<<<<<<<<
```

## Ajuda

- Para realizar a questão, é necessário utilizar o operador `%` . O operador `%` (lê-se mod) retorna o resto da divisão de um número por outro.
- Deseja descobrir se um numero é divisível por outro? basta usar o operador `%`. Se o resultado retornado for igual a 0, significa que um número é divisível pelo outro. Exemplo:
```
5 é divisível por 3? 5 % 3 retorna 2, ou seja, 5 não é divisível por 3.

10 é divisível por 5? 10 % 5 retorna 0, ou seja, 10 é divisível por 5.
```

Dica

* Um número é dito `par`, se o resto da divisão desse número por 2 é igual a zero. Um número é dito `ímpar`, se o resto da divisão desse número por 2 é diferente de 0. Exemplo:
```
  3 é par?  3 % 2 retorna 1, ou seja, 3 não é par.

  20 é par?  20 % 2 retorna 0, ou seja, 20 é par.

  21 é ímpar?  21 % 2 retorna 1, ou seja, 21 é ímpar.
```


Pseudocódigo

```
Leia primeiro_valor
Leia segundo_valor
auxiliar = primeiro_valor
soma = 0

Laço enquanto auxiliar <= segundo_valor
  Se (auxiliar % 2 for igual a 0):
    soma = soma + auxiliar
    auxiliar = auxiliar + 1
Se (primeiro_valor > segundo_valor):
  Mostrar "invalido"
Senao:
  Mostrar (soma)
```
#
