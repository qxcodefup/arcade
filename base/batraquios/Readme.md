# Está contido

![_](cover.jpg)

## Contexto

Todo batráquio é um anfíbio, mas nem todo anfíbio é um batráquio. Os sapos, as rãs e as pererecas são exemplos de animais que são ao mesmo tempo anfíbios e batráquios.

Portanto, o conjunto dos sapos está contido no conjunto dos batráquios, que, por sua vez, está contido no conjunto dos anfíbios.

Ficou confuso? Quem mandou faltar à aula de biologia!

Agora, aplicando isso a vetores: dados dois vetores, verifique se o primeiro está contido no segundo.

### Entrada

- linha 1: Número de elementos **N** do primeiro vetor (1 a 50) seguido dos elementos.  
- linha 2: Número de elementos **N** do segundo vetor(1 a 50) seguido dos elementos.

### Saída

- **"sim"** se o primeiro está condido no segundo e **"não"** caso contrário.

- Descubra se o vetor v1 está contido em v2 e retorne **"true"** se isso ocorrer.
  
## Testes

```py
>>>>>>>> INSERT
2 1 3
3 1 5 3
======== EXPECT
sim
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 1 3
3 6 5 3
======== EXPECT
nao
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3 1 3 2
6 1 5 3 6 8 2
======== EXPECT
sim
<<<<<<<< FINISH
```
