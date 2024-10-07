# @dindin - Clenda adora chocolate

Clenda adora um dindin de chocolate, mas acha horrível ter que pegar fila pra matar seu desejo de doce depois do almoço.

Ela sempre fica triste quando chega lá e não tem mais chocolate. A intuição dela diz que chocolate é o melhor sabor do mundo, mas pra ter certeza, ela decidiu contar se ele é realmente o sabor mais vendido.

Pensando nisso, ela resolveu anotar qual dindin foi vindido e o turno da venda para calcular qual o dindin mais vendido e o horário mais vago pra comprar.

### Entrada e Saída

- Entrada
  - 1a linha: qtd de dindins vendidos
  - Linha subsequentes: sabor do dindin e o turno.
- Saída
  - 1a linha: Sabor mais vendido ou empate
  - 2a linha: Turno mais vago ou empate

## Restrições

- Sabores de dindin
  - `c` para chocolate
  - `l` para limão
- Turnos
  - `m` para o horário da manhã
  - `t` para o horário depois do almoço

```py

>>>>>>>> INSERT
1
c m
======== EXPECT
c
t
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
c m
l t
======== EXPECT
empate
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
c m
c t
======== EXPECT
c
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
l m
l t
======== EXPECT
l
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
c t
l t
======== EXPECT
empate
m
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
c m
l m
======== EXPECT
empate
t
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
c m
c t
l m
======== EXPECT
c
t
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
c m
c t
l m
l m
l m
======== EXPECT
l
t
<<<<<<<< FINISH

```
