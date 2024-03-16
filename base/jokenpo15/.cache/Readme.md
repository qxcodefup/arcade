# L3 - @jokenpo15

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/jokenpo15/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup jokenpo15`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

## Motivação

O jokenpo é emocionante. Normalmente, as crianças aprendem a jogar jokenpo antes de aprenderem par ou ímpar pois é mais fácil aprender que pedra quebra tesoura do que somar números e descobrir se par ou ímpar. Existem várias variações. Uma interessante com 15 níveis é a seguir. Cada elemento ganha de 7 elementos a sua frente e perder de 7 elementos que estão antes dele.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/jokenpo15/cover.jpg)

Vamos fazer do Human o número 0, Tree será 1 e assim sucessivamente. O número 3 (sponje) ganha de (4, 5, 6, 7, 8, 9, 10) e perde de (11, 12, 13, 14, 0, 1, 2).

## Entrada

- Dois números, A, B um por linha indicando as escolhas do primeiro e do segundo jogador.

## Saída

- "Empate", "Jogador 1", "Jogador 2"

## Restrições

- 0 ≤ A, B, C ≤ 14

## Exemplos

``` txt
>>>>>>>>
1
0
========
Jogador 2
<<<<<<<<
>>>>>>>>
5
9
========
Jogador 1
<<<<<<<<

>>>>>>>>
0
0
========
Empate
<<<<<<<<
```
