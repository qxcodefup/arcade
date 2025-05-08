# Calculando o próximo segundo

![ponteiros de um relógio](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/segundo/cover.jpg)

## Motivação

A mãe de João entrou em seu quarto e ficou furiosa por causa da bagunça. Ela deu um grito bem alto e acordou o coitado do João que estava no terceiro sono. Ele sonhando que estava contando as ovelhas que conseguiam pular a cerca da fazenda de seu pai, mas no sonho, ele só conseguia contar de 60 em 60.

Após cair da cama, sua mãe lhe disse que se ele não se levantasse em um segundo e arrumasse seu quarto inteiro ficaria de castigo até o próximo ano bissexto, primo e quadrado perfeito.

## Ação

Supondo que João seja sobre humano, seu trabalho é fazer um programa para calcular em qual hora minuto e segundo ele deve ter terminar de arrumar seu quarto.

### Entrada

* Três inteiros, hora, minuto e segundo inicial em uma linha.

## Saída

* Hora, minuto e segundo final e uma linha.

## Exemplos

``` py
>>>>>>>> INSERT
12 10 11
======== EXPECT
12 10 12
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12 10 59
======== EXPECT
12 11 00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12 59 59
======== EXPECT
13 00 00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
23 59 59
======== EXPECT
00 00 00
<<<<<<<< FINISH
```

## Dica

### Lendo as variáveis

Para ler as variáveis em python e javascript você pode fazer assim:

* Python: `hora, min, seg = map(int, input().split(" "))`
* Javascript = `let [hora, min, seg] = input().split(" ").map(Number)`

### Imprimindo com 2 dígitos

Para imprimir um número inteiro colocando zeros a esquerda utilize o seguinte comando. Se o printf contiver %0xd, o número vai ser impresso completando com zeros a esquerda se o número tiver menos que x caracteres. Para imprimir com dois dígitos a variável **valor** use.

```c
c
printf("%02d", valor);

python
print("%02d" % (valor))

javascript
console.log("String(valor).padStart(2, '0'));
```
