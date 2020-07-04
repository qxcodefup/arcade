## ©02_seleção L3 - Rufus e Par ou Ímpar!


![](__capa.jpg)

## Motivação

Rufus(minha tartaruga cibernética) quer entrar no campeonato de par ou impar entre tartarugas.

Implemente o par ou impar no processador de RUFUS para que ele possa participar do campeonato
mundial de par ou impar e trazer o prêmio pra UFC.

[DS]

### Entrada:
* linha 1: A opção do jogador1(p para par e i para impar)
* linha 2: o número de dedos do primeiro jogador
* linha 3: número de dedos do segundo jogador.

### Saída:
* "Venceu" se o jogador 1 venceu e "Perdeu" se ele perdeu.

## Exemplos

```
>>>>>>>>
p
1
1
========
Venceu
<<<<<<<<

>>>>>>>>
p
0
1
========
Perdeu
<<<<<<<<

>>>>>>>>
i
0
0
========
Perdeu
<<<<<<<<

>>>>>>>>
i
1
0
========
Venceu
<<<<<<<<
```


## Ajuda
#### 1º Pseudocódigo

* Ler o sinal do jogador
* Ler o número dedos do primeiro e do segundo jogador
* Guarda a soma dos dedos do primeiro mais o segundo
* Se o sinal for igual a p
    * Mostre na tela “Venceu” se a soma dos dedos módulo 2 for igual a 0
    * Se não mostre “Perdeu”
* Caso o sinal for igual a i
    * Mostre “Venceu” se a soma dos dedos módulo 2 for diferente de 0
    * Se não printe “Perdeu”

#### 2º Pseudocódigo
* Ler o sinal do jogador
* Ler o número dedos do primeiro e do segundo jogador
* Guarda a soma dos dedos do primeiro mais o segundo
* Se o sinal for igual a "p" e o modulo da soma por 2 for igual a 0 
ou o sinal for igual “i” e o modulo da soma por 2 for igual a 1 mostre na tela "Venceu"
* Se não
Mostre na tela "Perdeu"

