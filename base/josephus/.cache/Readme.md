# Cabeças vão rolar

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/josephus/cover.jpg)

## Contexto

Um problema clássico da matemática e da história é o problema de Josephus. Nele, várias pessoas estão disputando e apenas uma será a vencedora.

As pessoas estão em uma fila circular e, a cada rodada, a pessoa que está com a espada mata a pessoa da frente e passa a espada para a próxima pessoa viva. O processo continua até que apenas uma pessoa esteja viva.

Imagine N pessoas em círculo, sendo que o primeiro tem o número 1 na camisa e o último o número N.  

Em seguida, um número X é sorteado.

A pessoa X sorteada pega a espada e decapita o companheiro da sua frente. Depois passa a espada para o próximo vivo que decapita o colega da frente.

Como se fosse removendo elementos intercaladamente em uma lista circular.
  
Assim continue até que só sobre um.

Highlander Mode On!  
  
**Atenção:** Não faça isso em casa.  
  
### Simulação
  
- Cinco pessoas e é sorteado o 3.  

```py
1 2 3 4 5 | : O 3 mata o 4 e a espada vai pro 5.  
1 2 3 5   |  : O 5 mata o 1 e a espada vai pro 2.  
2 3 5     |   : O 2 mata o 3 e a espada vai pro 5.  
2 5       |    : O 5 mata o 2.  
5         |     : Sobra o 5
```


### Entrada

- Um número inteiro **N** representando o número de participantes (1 a 1000).
- Um número inteiro **X representando o jogador que inicia com a espada (1 a N).

### Saída

-  O número do jogador vencedor.

## Testes

``` py

>>>>>>>> INSERT
5 
3
======== EXPECT
5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
6
======== EXPECT
4
<<<<<<<< FINISH

```
