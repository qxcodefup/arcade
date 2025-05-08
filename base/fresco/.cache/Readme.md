# Juntar palavras

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/fresco/cover.jpg)

## Motivação

Ja percebeu que quando temos que o final de uma palavra, quando é uma vogal e combina com a próxima palavra nós juntamos as duas?

Isso tem um nome legal, em frances se chama liaison. Em português eu acho que não tem um nome legal assim.

## Ação

Que tal fazer um código que faz isso? Dado uma entrada de texto (max 100 char) apenas com minúsculo e espaço faça o liaison das palavras. Há apenas um espaço entre as palavras e não existe espaço no começo ou fim da frase.

Se tiver 3 ou mais vogais juntas so junte todas amo o orvalho -> amorvalho

o gago disse e e e eu te amo -> o gago disseu te amo

### Entrada

* Um texto. (max 100 char)

## Saída

* O liaison das palavras.

## Exemplos

``` py
>>>>>>>> INSERT
a porta amassou
======== EXPECT
a portamassou
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
carla almeida alencar
======== EXPECT
carlalmeidalencar
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a carla a ama
======== EXPECT
a carlama
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
o orvalho ouviu uniformemente e eu uivei
======== EXPECT
orvalhouviuniformementeuivei
<<<<<<<< FINISH
```
