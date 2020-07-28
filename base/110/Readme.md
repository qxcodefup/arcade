## #05_strings L2 - Organizando Ru - Homens e Mulheres!


![](__capa.jpg)

## Motivação

Você ganhou uma bolsa de auxílio pra organizar a fila do RU.  
Então teve uma brilhante ideia para organizar a fila.  
Você decidiu fazer uma fila com os homens e outra com as mulheres.

## Ação

Você receberá uma frase e irá tratar as vogais como as mulheres e as consoantes como os homens. Separe vogais e consoantes.

Cada frase tem até 100 char.

### Entrada

*   1a linha: uma frase com letras minusculas e espaço apenas com ate 100 caracteres.  

### Saida

*   1a linha: as vogais que aparecem ignorando espaço

*   2a linha: as consoantes que aparecem ignorando espaço.

## Exemplos  

```
>>>>>>>>
um abraco amigo
========
uaaoaio
mbrcmg
<<<<<<<<

>>>>>>>>
meteoro de pegasus
========
eeooeeau
mtrdpgss
<<<<<<<<

>>>>>>>>
hora de morfar
========
oaeoa
hrdmrfr
<<<<<<<<

>>>>>>>>
thunder thunder thunder cats owwww
========
ueueueao
thndrthndrthndrctswwww
<<<<<<<<
```
## Ajuda
#### Pseudocódigo

```
inicie uma string s com 102 espaços
leia a string s
crie um laço onde: i = 0; s na posição i é diferente de '/n'; i++
    se s na posição i == 'a' ou s na posição i == 'e' ou s na posição i == 'i' ou s na posição i == o ou s na posição i == u
        mostre s na posição i;

crie um laço onde: i = 0; s na posição i é diferente de '/n'; i++
    se s na posição i != 'a' e s na posição i != 'e' e s na posição i != 'i' e s na posição i != o e s na posição i != u
        mostre s na posição i;
```
#