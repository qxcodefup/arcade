# Separando a partir de tokens

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tokens/cover.jpg)

## Ação

Dada uma frase (max 100 char) com palavras (letras minusculas), números e espaço, divida os elementos em n frases usando os tokens ' # ' e ' ; ' como referência de fim para aquela frase.

### Entrada

* Uma frase (max 100 char) com palavras (letras minusculas), números e espaços que podem ser separados por tokens.

### Saida

* n frases sem os tokens.

## Exemplos

``` py
>>>>>>>> INSERT
mamae me ama#15#1.76;
======== EXPECT
mamae me ama
15
1.76
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
aa 4#1 -f; -2.0;
======== EXPECT
aa 4
1 -f
 -2.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
coca zero;1.75#8;U;
======== EXPECT
coca zero
1.75
8
U
<<<<<<<< FINISH
```
