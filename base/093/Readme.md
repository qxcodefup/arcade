## #strings L2 - Gritando em Caixa Alta
### Invertendo o Case da frase!

![](__capa.jpg)

## Motivação

*   Meu filho, você não sabe que quando a gente escreve tudo em caixa alta é como se a gente tivesse gritando.
*   Sabia não.
*   Como assim não sabia, sua mãe não é professora de informática?
*   É.
*   E ela não lhe ensinou o básico sobre etiqueta na internet?
*   Não.
*   Eu vou falar com sua mãe então.
*   Tia, aproveita e pede pra ela não usar caixa alta quando eu mostrar o boletim pra ela.

## Ação

Dado um texto(max 100 char) mostre o texto invertido. O que for minúsculo imprima em maiúsculo e vice versa. Números e pontuação deixe inalterado.

### Entrada

*   Um texto (max 100 char)

### Saída

*   O texto com os caracteres invertido. O que for minúsculo imprima em maiúsculo e vice versa.

## Exemplos

```
>>>>>>>>
O ovomaltine e GOSTOSO
========
o OVOMALTINE E gostoso
<<<<<<<<

>>>>>>>>
Paralelepipedarte-ei se NAO me passar a CARTEIRA
========
pARALELEPIPEDARTE-EI SE nao ME PASSAR A carteira
<<<<<<<<

>>>>>>>>
1, Dois, 3 Indiozinhos
========
1, dOIS, 3 iNDIOZINHOS
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
inicie uma string frase com 100 espaços
leia a string frase

crie um laço que inicia i = 0 e continua enquanto i < frase e adicione i++
    se frase na posiçao i >= 'a' e frase na posiçao i <= 'z'
        mostre frase na posiçao i - ('a' - 'A')
    senão se frase na posiçao i >= 'A' e frase na posiçao i <= 'Z'
        mostre frase na posiçao i + ('a' - 'A')
    senão
        mostre frase na posiçao i;
```
#
