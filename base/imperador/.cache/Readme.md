# Deu a louca no imperador

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/imperador/cover.jpg)

## Motivação

Na Roma antiga era comum existirem arenas para batalhas, uma das mais famosas é o Coliseu.
Os gladiadores (pessoas que lutavam na arena) eram, na maioria, escravos, prisioneiros de guerra
ou alugados por seus senhores, homens condenados a trabalhos forçados ou jovens livres, de famílias
empobrecidas, que abraçavam a profissão em busca de dinheiro e recompensas generosamente distribuídas aos vitoriosos.

Havia também os condenados à morte, mas estes não podiam se defender — entravam na arena desarmados.

Cyzar O Imperador, certa vez estava cansado dos combate 1x1 e resolveu fazer uma única e gigante batalha, ele juntou todos os Gladiadores e Condenados à morte no Coliseu para divertir os seus subordinados.

Porém, como os Gladiadores podem se defender, eles têm duas vezes mais chances de vitórias. Eles poderiam perder caso a quantidade de Condenados à morte fosse maior ou melhor posicionada. Às vezes, os Gladiadores demoram a lutar, então Cyzar fica entediado e decide esquentar ainda mais as coisas colocando um Leão na arena!

## Ação

Usando G para gladiadores, C para Condenados à morte e L para o Leão, o usuário preencherá a matriz quadrada.

OBS: Como a economia em Roma estava precária, o Cyzar só possuía um Leão, logo só pode haver um L na arena.

Regras do cálculo:

- G vale por 2 C
- Caso C esteja posicionado na diagonal secundária da matriz, ele tem o mesmo valor de um G.
- Caso apareça um L, toda a linha será destruída!

Some todos os G's e C's e determine quem é o vencedor.

### Entrada

- 1a linha: Número de linhas e colunas da matriz
- linhas seguintes, o conteúdo da matriz com três caracteres apenas
  - G para Gladiadores
  - C para Condenados a morte
  - L para Leão.

## Saída

- "Gladiadores" caso G seja maior
- "Condenados a morte" caso C seja maior
- "Ninguém" caso contrário.

## Exemplos

``` py
>>>>>>>> INSERT
3
G L G
C C C
C G G
======== EXPECT
Condenados a morte
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
G G C
C C C
G C C
======== EXPECT
Condenados a morte
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
C C G
C G C
G C C
======== EXPECT
Ninguem
<<<<<<<< FINISH
```
