# Semana e sábado

![_](assets/cover.jpg)

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
>>>>>>>> INSERT
2
12
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
9
======== EXPECT
SIM
<<<<<<<< FINISH
```
