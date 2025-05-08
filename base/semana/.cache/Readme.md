# Semana e sábado

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/semana/cover.jpg)

## Contexto

Um funcionário trabalha de segunda a sexta-feira, das 8h às 11h e das 14h às 17h. Às 17h ele ainda deve estar trabalhando! No sábado, ele trabalha apenas das 8h às 11h.

Para garantir que o funcionário está cumprindo sua carga horária, implemente um código que lê o dia da semana e a hora, informando ao chefe se o funcionário ainda deve estar trabalhando.

### Entrada

- Um inteiro representando o dia da semana:
  - 1 = Domingo,
  - 2 = Segunda-feira,
  - 3 = Terça-feira,
  - 4 = Quarta-feira,
  - 5 = Quinta-feira,
  - 6 = Sexta-feira,
  - 7 = Sábado.
- Um inteiro representando a hora no formato 24h (por exemplo, 8 representa 8h da manhã e 14 representa 14h ou 2h da tarde).

### Saída

- O programa deve imprimir "SIM" se o funcionário deve estar trabalhando ou "NAO" se ele não deve estar trabalhando.

## Testes

```py
>>>>>>>> INSERT seg as 12
2
12
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 7
2
7
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 13
2
13
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 14
2
14
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 18
2
18
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 17
2
17
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT seg as 3
3
17
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT dom as 9
1
9
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT dom as 14
1
14
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT ter as 19
3
19
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sexta 8
6
8
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sex as 11
6
11
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sex as 12
6
12
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sex as 15
6
15
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sab as 7
7
7
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sab as 8
7
8
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sab as 11
7
11
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sab as 12
7
12
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sab as 15
7
15
======== EXPECT
NAO
<<<<<<<< FINISH

```
