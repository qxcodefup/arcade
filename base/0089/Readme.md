## @0089 #4_vet L4 - Mega Jokenpo!
## @qxcode

![](capa.jpg)

### Motivação

Rufus em sua evolução tartarugistica não se contenta com pouco. Descobriu um super jokenpo e deseja que você implemente em seu chip. Faça isso por Rufus.

NÃO faça na força BRUTA. Observe que cada elemento ganha dos 4 elementos a sua frente.

Ficou confuso?

Pedra martela fogo, esmaga tesoura, humano e esponja.  
Fogo derrete tesoura , queima papel, humano e esponja.  
Tesoura corta através do ar, papel , humano e esponja.  
Humano limpa com esponja , escreve papel, respira ar , bebe água .  
Esponja absorve papel, usa bolsas de ar, absorve a água, limpa arma.  
Papel sopra ar, cobre pedra, flutua sobre a água, tem mais poder que arma.  
Ar sopra fogo, corrói pedra, evapoenferruja a tesoura e arma.  
Arma acerta pedra, fogo, tesoura e humano.

### I/O

ra a água , mancha a arma.
água corrói pedra, apaga o fogo.

##### Entrada:

Texto em minúsculo e sem acentos contendo as opcões dos dois jogadores.  

##### Saída:  

empate, jog1 ou jog2.

### Exemplos:

```
>>>>>>>>
sponge
paper
========
jog1
<<<<<<<<

>>>>>>>>
air
scissors
========
jog2
<<<<<<<<

>>>>>>>>
gun
gun
========
empate
<<<<<<<<
```

Existem versões com até 101 elementos. Ficou curioso? http://imgur.com/gallery/dfPuD

<!---
>>>>>>>> 01
rock
rock
========
empate
<<<<<<<<

>>>>>>>> 02
human
gun
========
jog2
<<<<<<<<

>>>>>>>> 03
rock
fire
========
jog1
<<<<<<<<

>>>>>>>> 04
rock
human
========
jog1
<<<<<<<<

>>>>>>>> 05
rock
paper
========
jog2
<<<<<<<<

>>>>>>>> 06
rock
water
========
jog2
<<<<<<<<

>>>>>>>> 07
air
human
========
jog2
<<<<<<<<

>>>>>>>> 08
fire
air
========
jog2
<<<<<<<<

>>>>>>>> 09
fire
sponge
========
jog1
<<<<<<<<

>>>>>>>> 10
fire
paper
========
jog1
<<<<<<<<

>>>>>>>> 11
rock
sponge
========
jog1
<<<<<<<<
--->