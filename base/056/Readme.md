## #03_repetição L1 - Calça Zeze de Camargo - Mínimo


![](__capa.jpg)

## Motivação

Tem mulheres que gostam de roupa apertada. E homens sertanejos também. Mariana olhou em seu armário  
e se vestiu para lacrar na festa do Luan Santana. Então pegou 5 de suas melhores calças jeans e decidiu  
escolher a mais justa.  

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
Crie menor(int) = 31 
Crie um laço que inicia em 0 e adiciona mais um enquanto for menor que 5
  Leia auxiliar
  Se auxiliar < menor
    menor = auxiliar
Fim do laço
Mostre menor
```
note que é dado na questão que o maior numero pocível é 30. Logo 31 sempre vai ser substituido pelo primeiro auxiliar