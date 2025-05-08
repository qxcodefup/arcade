# Está contido

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/batraquios/cover.jpg)

## Contexto

Todo batráquio é um anfíbio, mas nem todo anfíbio é um batráquio. Os sapos, as rãs e as pererecas são exemplos de animais que são ao mesmo tempo anfíbios e batráquios.

Portanto, o conjunto dos sapos está contido no conjunto dos batráquios, que, por sua vez, está contido no conjunto dos anfíbios.

Ficou confuso? Quem mandou faltar à aula de biologia!

Agora, aplicando isso a vetores: dados dois vetores, verifique se o primeiro está contido no segundo.

Descubra se o vetor `vetor1` está contido em `vetor2` e retorne **"sim"** se isso ocorrer.

### Entrada

- linha 1: Número de elementos **N** do primeiro vetor (1 a 50) seguido dos **N** elementos.  
- linha 2: Número de elementos **M** do segundo vetor(1 a 50) seguido dos **M** elementos.

### Saída

- **"sim"** se o primeiro está condido no segundo.
- **"não"** caso contrário.

  
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
