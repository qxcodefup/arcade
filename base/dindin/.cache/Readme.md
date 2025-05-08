# Clenda adora chocolate

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/dindin/cover.jpg)

## Contexto

Clenda adora um dindin de chocolate, mas odeia ter que pegar fila para comprar um após o almoço. Ela sempre fica decepcionada quando chega e não encontra mais o sabor de chocolate disponível. Para comprovar que chocolate é realmente o sabor mais vendido e descobrir o horário mais vago para comprar, Clenda começou a anotar as vendas dos dindins, registrando o sabor e o turno em que foram vendidos.

Dado o número de dindins vendidos, o sabor e o turno de cada venda, seu programa deve calcular qual sabor foi o mais vendido e qual turno foi o mais vago.

### Entrada

- A primeira linha contém um inteiro representando a quantidade de dindins vendidos.
- As próximas linhas contêm dois valores:
  - O sabor do dindin (c para chocolate e l para limão).
  - O turno da venda (m para manhã e t para tarde).

### Saída

- A primeira linha deve conter o sabor mais vendido ou "empate" se houver igualdade.
- A segunda linha deve conter o turno mais vago ou "empate" se houver igualdade.

### Restrições

- O número de dindins vendidos é um inteiro positivo.
- Os sabores de dindin são:
  - **c:** chocolate.
  - **l:** limão.
- Os turnos são:
  - **m:** manhã.
  - **t:** tarde.

## Testes

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
