# Formatando data

![_](assets/cover.jpg)

Os formatos de data e hora são diversos. Sua tarefa é criar um programa que leia hora, minuto, dia, mês e ano e imprima no formato `hh:mm dd/mm/aa`. Você deve se certificar de imprimir um 0 à esquerda para garantir que todas as informações (hora, minuto, dia, mês) tenham 2 dígitos e que o ano seja representado apenas pelos seus dois últimos dígitos.

### Entrada

- Cinco números inteiros, um por linha: hora, minuto, dia, mês e ano.

### Saída

- A data e hora formatadas no padrão `hh:mm dd/mm/aa`.

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
4
12
12
3
1988
======== EXPECT
04:12 12/03/88
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12
30
1
3
188
======== EXPECT
12:30 01/03/88
<<<<<<<< FINISH
```
<!-- load -->
