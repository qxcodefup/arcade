## ©05_strings L2 - Avestruz com Alcaparras
### Contar Maiusculas e Minusculas!

![](__capa.jpg)

## Motivação

\- Mamãe, quantos 'a's existem na frase:  
"A Andreia alimentou a avestruz com alcaparras"  
Um silêncio toma conta do ambiente. Mamãe olha pro teto como quem conta algo. Antes que Marileuza responda, Emanuelita se adianta.  
\- São 10 vezes Mamãe!  
Mamãe se sentindo superada por uma menina de 6 anos responde!  
\- Menina, vai programar que é mais futuro.

## Ação

Ajude Emanuelita a fazer o código que conta quantas vezes um caractere aparece numa frase (max 100 char).  
Conte os caracteres MAIÚSCULOS e MINÚSCULOS.

OBS: Não use o método count do python.

### Entrada

*   Uma frase de até 100 caracteres e uma letra.

### Saída

*   O número de vezes que a letra aparece na frase.

## Exemplos

```
>>>>>>>>
A Andreia alimentou a avestruz com alcaparras
a
========
10
<<<<<<<<

>>>>>>>>
A Andreia atirou alcachofras no LEAO
e
========
2
<<<<<<<<

>>>>>>>>  
A Andreia atirou alcachofras no leao
x
========  
0
<<<<<<<<
```

## Ajuda
#### Pseudocódigo
```
inicie uma string frase com 100 espaços e um char letra
leita frase até o /n e leia letra
inicie um contador em 0;

se letra <= 90 e letra >= 65
    letra += 32;

crie um laço onde iinicia em 0 e continua enquanto i < frase e adiciona i++
    se frase na posição i <= 90 e frase na posição i >= 65
        frase na posição i += 32;

crie um laço que inicia i = 0 enquanto i < frase; i++;
    se letra = frase na posição i
        contador++;

mostre contador;
```
#