# L3 - Separando a partir de @tokens

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/tokens/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup tokens`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tokens/cover.jpg)

## Ação

Dada uma frase (max 100 char) com palavras (letras minusculas), números e espaço, divida os elementos em n frases usando os tokens ' # ' e ' ; ' como referência de fim para aquela frase.

## Entrada

* Uma frase (max 100 char) com palavras (letras minusculas), números e espaços que podem ser separados por tokens.

### Saida

* n frases sem os tokens.

## Exemplos

``` txt
>>>>>>>>
mamae me ama#15#1.76;
========
mamae me ama
15
1.76
<<<<<<<<

>>>>>>>>
aa 4#1 -f; -2.0;
========
aa 4
1 -f
 -2.0
<<<<<<<<

>>>>>>>>
coca zero;1.75#8;U;
========
coca zero
1.75
8
U
<<<<<<<<
```
