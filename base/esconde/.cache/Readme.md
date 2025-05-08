# Diana no esconde-esconde

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/esconde/cover.jpg)

## Contexto

Quando Diana jogava esconde-esconde, ela achava que o Paulo Victor contava rápido demais. Para resolver o problema, Diana inventou uma regra: Paulo deveria contar até o número combinado dizendo apenas os números ímpares na ida, e depois contar de volta dizendo apenas os números pares.

Para garantir que a contagem fosse feita corretamente, Ingrid ficava de vigia, e Paulo só poderia sair após terminar a contagem.

Dado um número N ímpar, a tarefa é imprimir a sequência de números ímpares de 1 até N na ida, seguida pelos números pares de N até 0 na volta.

### Entrada

- Um número inteiro **N**.

### Saída

- A sequência dos números ímpares de 1 até **N**, seguidos pelos números pares de **N** até 0, cada número em uma nova linha.

### Restrição

- O número **N** será sempre um número ímpar.

## Testes

```py
>>>>>>>> INSERT
5
======== EXPECT
1
3
5
4
2
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
9
======== EXPECT
1
3
5
7
9
8
6
4
2
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
13
======== EXPECT
1
3
5
7
9
11
13
12
10
8
6
4
2
0
<<<<<<<< FINISH

```
