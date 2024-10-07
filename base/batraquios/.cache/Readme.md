# @batraquios - está contido

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/batraquios/cover.jpg)

## Motivação

Todo batráquio é anfíbio, mas nem todo anfíbio é batráquio. Todo sapo, rã e perereca são tanto anfíbios
como batráquios.

Assim, o conjunto dos sapos está contido no de batráquios que está contido no de anfíbio.

Não entendeu? Quem mandou gazear a aula de biologia. -_-

\[DS\]

## Ação

Dados dois vetores, verifique se o primeiro está contido no segundo.

### Entrada

- 1a linha: Número de elementos do primeiro vetor(1 a 50) seguido dos elementos.  
- 2a linha: Número de elementos do segundo vetor(1 a 50) seguido dos elementos.

## Saída

- "sim" se o primeiro está condido no segundo e não caso contrário.

- Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.
  
## Exemplos

``` py
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
