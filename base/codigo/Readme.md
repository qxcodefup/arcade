# L3 - @codigo - OBI 2015 - Fase 2 - Nível Júnior

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/codigo/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup codigo`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/codigo/cover.jpg)

## Motivação

Gabriel inventou um código para representar números naturais, usando uma sequência de zeros e uns. Funciona assim, o número natural é representado pela quantidade de vezes que o padrão "100" aparece na sequência. Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes; e na sequência 11101010111110111010101 ele não aparece nenhuma vez. Você deve ajudar Gabriel e implementar um programa que, dada a sequência de zeros e uns, calcule quantas vezes o padrão "100" aparece nela.

## Entrada

- A primeira linha da entrada contém um inteiro N, o tamanho da sequência. A segunda linha contém a sequência de N zeros e uns, separados por espaço em branco.

## Saída

- Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência.

## Restrições

- 3 ≤ N ≤ 104

## Exemplos

``` txt
>>>>>>>>
17
1 1 1 0 1 0 0 1 0 1 0 0 1 1 1 1 0
========
2
<<<<<<<<

>>>>>>>>
8
1 1 1 1 0 1 1 1
========
0
<<<<<<<<

>>>>>>>>
3
1 0 0
========
1
<<<<<<<<

>>>>>>>>
3
0 1 0
========
0
<<<<<<<<
```
