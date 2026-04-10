# Eribelton e a Ascologia V3 - Busca do mínimo

![_](assets/cover.jpg)

## Contexto

Eribelton continua sua jornada no misterioso campo da Ascologia, a ciência que estuda o valor oculto das palavras. Diferente da versão 2, onde o objetivo era encontrar a combinação perfeita que resultasse em um valor zero, a busca agora é pela melhora, não pela perfeição.

Sua tarefa é pegar uma palavra e testar a adição de cada letra minúscula ('a' a 'z') ao final dela para descobrir qual delas resulta no menor valor ascológico possível. Se a adição de nenhuma letra conseguir diminuir o valor original da palavra, ela deve permanecer inalterada.

### Entrada

- Uma palavra de até **50** caracteres, contendo apenas letras minúsculas e maiúsculas, sem espaços.

### Saida

- **1ª linha:** o valor ascológico da palavra original.
- **2ª linha:** a nova palavra (com a letra que resultou no menor valor, ou a original se não houver melhora).
- **3ª linha:** o valor ascológico da nova palavra.

### Restrições

- A palavra terá no máximo **50** caracteres.
- A busca pela letra de menor valor deve ser feita apenas com caracteres minúsculos ('a' a 'z').

## Testes

``` py
>>>>>>>> INSERT
e
======== EXPECT
1
ec
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
d
======== EXPECT
0
d
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Aga
======== EXPECT
15
Agaa
12
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Rufus
======== EXPECT
33
Rufusu
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Ariates
======== EXPECT
13
Ariatesa
10
<<<<<<<< FINISH
```
