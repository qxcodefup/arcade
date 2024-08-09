# L1 - @sapatos para 2 e 3

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/sapatos/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup sapatos`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sapatos/cover.jpg)

Cláudia tem cinco filhos. Dois meninos e três filhas meninas. Foi numa bomboniere que vendia bombons em formato de sapatos. Alguns bombons eram de sapato social masculino e outros de sapatos de baile para meninas.

Começou a pensar que se comprasse uma quantidade errada de bombons, ou o tipo errado, a divisão entre os filhos não ia ficar exata e poderia dar briga.

Ela explicou o problema pro vendedor, que querendo vender muito, ludibriou-a, dizendo:

- Basta somar os números que são divisíveis por 2 e divisíveis por 3 que estão entre A e B, inclusive A e B.

Ela não entendeu nada, já que não sabia nada de matemática, mas caiu no golpe e acabou comprando tudo.

Moral da história:

- 1. Não compre bombons de formato de sapato.
- 2. Aprenda lógica matemática.

## Entrada

- Dois números inteiros A e B, sendo B maior que A.

## Saída

- A soma de todos os números pares divisíveis por 3 ou "invalido" caso A seja maior que B.

### Exemplos

``` txt
>>>>>>>> 01
1
20
========
36
<<<<<<<<

>>>>>>>> 02
1
10
========
6
<<<<<<<<

>>>>>>>> 03
10
1
========
invalido
<<<<<<<<

>>>>>>>> 04
6
6
========
6
<<<<<<<<
```

## Ajuda

Um número é par se o resto da divisão por 2 é zero e é divisível por 3 se o resto da divisão por 3 é zero.
