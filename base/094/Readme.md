## ©05_strings L2 - Vogais e Consoantes
### Identificação e Montagem

![](__capa.jpg)

## Motivação

cvccvccv!

Tá ficando doido Pedrinho? Que marmota é essa? Disse Reumario Albrito!

cvvcvcvv vcccvcv!

Pirou de vez menino? O que é vcvcvcvcvc, tá achando que a vida é um chat?

É uma brincadeira Reumário! Eu pego uma frase e onde é vogal eu coloco v, onde é consoante eu coloco c. Onde é espaço eu ponho espaço. Então cvccvccv é o meu nome e cvvcvcvv ccccvcv o seu.

## Ação

Se você entendeu, faça o código que dada a frase de entrada(max 50 char), imprime a codificação de Pedrinho.

### Entrada

*   A frase. (max 50 char)

### Saída

*   A frase códificada.

## Exemplos

```
>>>>>>>>
Pedrinho Marcio
========
cvccvccv cvccvv
<<<<<<<<

>>>>>>>>
Reumario Albrito
========
cvvcvcvv vcccvcv
<<<<<<<<

>>>>>>>>
AaBbCcDdEe
========
vvccccccvv
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
crie uma função identifica que recebe parâmetro: char c
char original = c;
se (c >= 'A' e c <= 'Z')
    c = c + ('a' - 'A');
se (c = 'a' ou c = 'e' ou c = 'i' ou c = 'o' ou c = 'u')
    retorne 'v';
se(c >= 'a' e c <= 'z')
    retorne 'c';
retorne original;

inicie uma variavel frase com 100 espaços
leia frase
crie um laço que inicia i = 0 e continua enquanto frase na posição i != '\0'; i++)
    se (frase na posição i != '/n')
        mostre a função identifica levando (frase na posição i)
```
#
