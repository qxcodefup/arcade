# Vigenere e Valdiskley

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/vigenere/cover.jpg)

## Motivação

No capítulo 3 da saga de Valdiskey você vai escrever o algoritmo que faz a criptografia e descriptografia. Valentina aceitou o namoro e vai usar o seu código para ler o conteúdo das cartinhas de amor de Valdiskley. Se você quiser pesquisar o nome dessa cifra é cifra de Vigenere.

[http://pt.wikipedia.org/wiki/Cifra_de_Vigen%C3%A8re](http://pt.wikipedia.org/wiki/Cifra_de_Vigen%C3%A8re)

## Ação

Primeiro a criptografia:

Dado um texto claro e uma chave você deve:

- Repetir a chave até que ela tenha o mesmo tamanho do texto claro. No caso abaixo, repetimos a palavra princesa até completar a frase.  
- Você soma os caracteres 2 a 2 como aprendeu a fazer no segundo capítulo da história de Valdiskley. Ignore a pontuação e opere apenas as letras.

```py
Exemplo 1: chave: "abac"  
texto: batata? sim! Frita!!  
senha: abacab aca bacab  
saida: bbtctb? skm! Grktb!!

Exemplo 2:  
chave: "princesa"  
texto: "quando vi voce eu buguei"  
senha: "prince sa prin ce saprin"  
saida: "fliafs ni kfkr gy tuvlmv"
```

### Entrada

- A frase a ser operada, apenas caracteres minúsculos e pontuação.
- A palavra chave, apenas caracteres minúsculos e sem espaços ou pontuação.
- A operação de '+' para cifrar ou '-' para descifrar.

A operação de descifrar é o contrário da cifragem.

## Saída

- O resultado da operação.

## Exemplos

``` py
>>>>>>>> INSERT
batata? sim! frita!!
abac
+
======== EXPECT
bbtctb? skm! grktb!!
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
quando vi voce eu buguei
princesa
+
======== EXPECT
fliafs ni kfkr gy tuvlmv
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a data ua bbfrua
ab
-
======== EXPECT
a casa ta aberta
<<<<<<<< FINISH
```
