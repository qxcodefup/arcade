## #repetição L1 - Somatório V2


![](__capa.jpg)

## Motivação

Marilurdes tem muitos pares de sapatos. Só que vários deles ela compartilha com as irmãs Arilúcia e Barisilene. Quantos pares de sapato são divisíveis pelas 3 entre Arilúcia e Barislene?

## Ação

Some todos os números inteiros pares que são divisíveis por 3 que estão entre A e B, inclusive A e B.

### Entrada

* Dois números inteiros A e B, sendo B maior que A.

### Saída

* A soma de todos os números pares divisíveis por 3 ou "invalido" caso A seja maior que B.

## Exemplos

```
>>>>>>>>
1
20
========
36
<<<<<<<<

>>>>>>>>
1
10
========
6
<<<<<<<<

>>>>>>>>
10
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
Ler primeiro_valor
Ler segundo_valor
auxiliar = primeiro_valor
soma = 0

Se (primeiro_valor > segundo_valor):
    Mostrar "invalido"
Senao:
    auxiliar = primeiro_valor
    Faca enquanto (auxiliar <= segundo_valor):
        Se (auxiliar % 2 == 0) e (auxiliar % 3 == 0)
            soma = soma + auxiliar
            auxiliar = auxiliar + 1

Mostrar (soma)
```

