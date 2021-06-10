## #repetição L1 - Calça apertada - Mínimo


![](__capa.jpg)

## Motivação

Tem mulheres que gostam de roupa apertada. E homens sertanejos também. Mariana olhou em seu armário e se vestiu para abafar na festa do Luan Santana. Então pegou 5 de suas melhores calças jeans e decidiu escolher a mais justa.  

## Ação

Faça um programa que receba cinco valores inteiros e encontre o menor deles.  

### Entrada

*   5 valores inteiros (entre 1 e 30), um por linha.

### Saída

*   O menor valor inteiro.  

## Exemplos

```
>>>>>>>>
1
4
2
5
2
========
1
<<<<<<<<

>>>>>>>>
4
7
6
4
3
========
3
<<<<<<<<
```

## Ajuda
#### Pseudocódigo
```
variável menor = ler_inteiro()  
Faça 4 vezes
    variável auxiliar = ler_inteiro()
    Se auxiliar < menor
        menor = auxiliar
Mostre menor
```