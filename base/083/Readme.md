## @083 #04_vet L3 - Anfíbios e Batráquios - Está contido
## @qxcode

![](capa.jpg)

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

### Saída

- "sim" se o primeiro está condido no segundo e não caso contrário.

- Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.
  
## Dica
- Se todos os elementos de v1 existirem em v2, v1 só pode estar
contido em v2.

## Exemplos

```
>>>>>>>>
2 1 3
3 1 5 3
========
sim
<<<<<<<<

>>>>>>>>
2 1 3
3 6 5 3
========
nao
<<<<<<<<

>>>>>>>>
3 1 3 2
6 1 5 3 6 8 2
========
sim
<<<<<<<<
```

#

<!---
>>>>>>>> 01
2 7 8
3 3 4 5
========
nao
<<<<<<<<

>>>>>>>> 02
4 3 4 4 5
5 3 4 4 5 1
========
sim
<<<<<<<<

>>>>>>>> 03
4 3 4 3 2
5 3 4 5 7 3
========
nao
<<<<<<<<
--->