# Roda Roda Jequiti

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/jequiti/cover.jpg)

## Motivação

Dona Vanessa, nova consultora Jequiti, chega correndo e expulsa Fernandinho da televisão.  
\- Sai rápido minino, deixa esses desenhos véi, tá na hora do roda roda.  
\- Tá na hora de que mãe?  
\- Do Roda Roda Jequiti. Agora que sou consultora tenho que me preparar pra se um dia eu for chamada no programa. Tenho que treinar.  
\- Mãe, esse aí é o jogo da forca!  
\- É não menino.  
\- É Mãe!  
Subitamente a mente de Fernandinho se ilumina e ele faz a seguinte proposta:  
\- Mãe, se eu implementar o jogo da forca pra senhora jogar em casa, a senhora  
me deixa assistir o Dragon Ball?  
A mãe olha com um misto de admiração e espanto e pergunta desconfiada:  
\- O que é "implementar" minino?

## Ação

Faça um código que simule o comportamento do jogo da forca.  
Você recebe como parâmetro a palavra real e todos as letras que já foram chutadas pelo participante e deve retornar a palavra cifrada a ser apresentada pelo programa.

Nas letras não acertadas ainda, você deve colocar o caractere marcador passado por parâmetro.

Se nas palavras houver pontuação ou espaço,  você deve imprimi-los corretamente. Se a letra for maiúscula,  você deve imprimir maiúscula.

Formato dos exemplos:  "**\[palavra\]**" , "**\[chutes\]**" , "**\[marcador\]**" ->"**\[saída\]**"  
Ex: "**Abacaxi**" , "**axnpqe**" , '**\-**' -> "**A-a-ax-**"  
Ex: "**extraordinario**", "**aeioubcdfgh**" , '**\***' -> "**e\*\*\*ao\*di\*a\*io**"  
Ex: "**Teco-Teco!**" , "**tbxyan**" , '**\_**' -> "**T\_\_\_-T\_\_\_!**"  
Ex: "**Seu Pilantra!**" , "**yzxa**" , '**\***' -> "**\*\*\* \*\*\*a\*\*\*a!**"

### Entrada

* Frase(max 100 char),
* Chutes (max 26 char)
* Caractere de marcação (1 char).

## Saída

* Uma frase com as letras chutadas corretamente e o caractere marcador nas letras erradas.

## Exemplos

``` py
>>>>>>>> INSERT
extraordinario
aeioubcdfgh
*
======== EXPECT
e***ao*di*a*io
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Teco-Teco!
tbxyan
_
======== EXPECT
T___-T___!
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Seu Pilantra!
yzxa
*
======== EXPECT
*** ***a***a!
<<<<<<<< FINISH
```
