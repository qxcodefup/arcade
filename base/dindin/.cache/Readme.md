# L1 - @dindin - Clenda adora chocolate

Clenda adora um dindin de chocolate, mas acha horrível ter que pegar fila pra matar seu desejo de doce depois do almoço.

Ela sempre fica triste quando chega lá e não tem mais chocolate. A intuição dela diz que chocolate é o melhor sabor do mundo, mas pra ter certeza, ela decidiu contar se ele é realmente o sabor mais vendido.

Pensando nisso, ela resolveu anotar qual dindin foi vindido e o turno da venda para calcular qual o dindin mais vendido e o horário mais vago pra comprar.

## Entrada e Saída

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

```txt

#INPUT
1
c m
#OUTPUT
c
t
#END

#INPUT
2
c m
l t
#OUTPUT
empate
empate
#END

#INPUT
2
c m
c t
#OUTPUT
c
empate
#END

#INPUT
2
l m
l t
#OUTPUT
l
empate
#END

#INPUT
2
c t
l t
#OUTPUT
empate
m
#END

#INPUT
2
c m
l m
#OUTPUT
empate
t
#END

#INPUT
3
c m
c t
l m
#OUTPUT
c
t
#END

#INPUT
5
c m
c t
l m
l m
l m
#OUTPUT
l
t
#END

```
