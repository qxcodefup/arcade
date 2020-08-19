## #seleção L3 - Jokenpo 15


## Motivação

O jokenpo é emocionante. Normalmente, as crianças aprendem a jogar jokenpo antes de aprenderem par ou ímpar pois é mais fácil aprender que pedra quebra tesoura do que somar números e descobrir se par ou ímpar. Existem várias variações. Uma interessante com 15 níveis é a seguir. Cada elemento ganha de 7 elementos a sua frente e perder de 7 elementos que estão antes dele.

![](__capa.jpg)

Vamos fazer do Human o número 0, Tree será 1 e assim sucessivamente. O número 3 (sponje) ganha de (4, 5, 6, 7, 8, 9, 10) e perde de (11, 12, 13, 14, 0, 1, 2).

### Entrada

- Dois números, A, B um por linha indicando as escolhas do primeiro e do segundo jogador.

### Saída

- "Empate", "Jogador 1", "Jogador 2"

## Restrições

* 0 ≤ A, B, C ≤ 14

## Exemplos

```
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

## Ajuda

Para realizar a questão, é necessário utilizar o operador `%` . O operador `%` (lê-se mod) retorna o resto da divisão de um número por outro. Por exemplo:

```
4 % 2 retorna 0, pois o resto da divisão de 4 por 2 é 0.

4 % 3 retorna 1, pois o resto da divisão de 4 por 3 é 1.

-5 % 3 retorna -2, pois o resto da divisão de -5 por 3 é -2.
```

Dica
```
O resultado da diferença entre os dois jogadores pode ser negativo, então é somado 15(numéro máximo do jogo) para que se torne positivo.
```

Pseudocódigo

```
Ler primeiro_jogador
Ler segundo_jogador

Se (primeiro_jogador for igual a segundo_jogador):
    Mostrar "Empate"
Senao Se ((segundo_jogador - primeiro_jogador + 15) % 15) <= 7:
    Mostrar "Jogador 1"
Senao:
    Mostrar "Jogador 2"
```

