# L3 - Separando a partir de @tokens

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tokens/cover.jpg)

## Ação

Dada uma frase (max 100 char) com palavras (letras minusculas), números e espaço, divida os elementos em n frases usando os tokens ' # ' e ' ; ' como referência de fim para aquela frase.

## Entrada

* Uma frase (max 100 char) com palavras (letras minusculas), números e espaços que podem ser separados por tokens.

### Saida

* n frases sem os tokens.

## Exemplos

``` py
#INPUT
mamae me ama#15#1.76;
#OUTPUT
mamae me ama
15
1.76
#END

#INPUT
aa 4#1 -f; -2.0;
#OUTPUT
aa 4
1 -f
 -2.0
#END

#INPUT
coca zero;1.75#8;U;
#OUTPUT
coca zero
1.75
8
U
#END
```
