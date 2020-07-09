## ©03_repetição L2 - Revolta em Portugal


![](__capa.jpg)

## Motivação

Um grupo de portugueses planejava fazer uma revolução armada.

* Pois, pois Manoel, como pretendes tomar de assalto a praça?
* Ora, bolas Joaquim, estamos nós a chegar por lá. Vamos estar a retirar nossas espadas de nossas bainhas e espada-lo-emos todos!
* Ótima ideia. Vamos pois, ora bolas!

## Ação

Verifique se o grupo de Manoel ou de Joaquim conseguirá vencer essa batalha. Dado um vetor de números, os números ímpares representam os soldados e os números pares representam os rebeldes infiltrados. Some as forças e descubra qual dos dois grupos é mais forte.

### Entrada

* 1ª linha: tamanho do vetor (1 a 50)

* 2ª linha: vetor de números, cada número entre 1 e 50.

### Saída

* "soldados" se os soldados(impares) somados são mais fortes.

* "rebeldes" se os rebeldes(pares) somados são mais fortes.

* "empate" se ambas forças são iguais e todos morrerão.

### Exemplos

```
>>>>>>>>
2
1 2
========
rebeldes
<<<<<<<<

>>>>>>>>
3
1 2 1
========
empate
<<<<<<<<

>>>>>>>>
2
2 3
========
soldados
<<<<<<<<

>>>>>>>>
4
1 2 3 1
========
soldados
<<<<<<<<

>>>>>>>>
5
1 2 3 1 4
========
rebeldes
<<<<<<<<
```

## Ajuda
#### Pseudocódigo

```
Leia tamanho_do_vetor
Inicie um laço em 0 e continue enquanto for menor que o tamanho_do_vetor adicionando +1{
  Leia tropa
  Se (tropa modulo 2 igual a 0)
    somaPar = somaPar + tropa
  Senão 
    somaImpar = somaImpar + tropa
}
Se (somaPar maior que somaImpar) 
  Mostre "rebeldes"
Se (somaImpar maior que somapar)
  Mostre "soldados"
Se (somaPar igual a somaImpar)
  Mostre "empate"
```