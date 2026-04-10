# Formatando data

![_](assets/cover.jpg)

## Contexto

Os formatos de data e hora são diversos. Sua tarefa é criar um programa que leia hora, minuto, dia, mês e ano e imprima no formato `hh:mm dd/mm/aa`. Você deve se certificar de imprimir um 0 à esquerda para garantir que todas as informações (hora, minuto, dia, mês) tenham 2 dígitos e que o ano seja representado apenas pelos seus dois últimos dígitos.

### Entrada

- Cinco números inteiros, um por linha: hora, minuto, dia, mês e ano.

### Saída

- A data e hora formatadas no padrão `hh:mm dd/mm/aa`.

## Testes

``` py
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

### Dica

Seja a variável `valor` um número em inteiro, você pode imprimir essa variável completando com zeros a esquerda até formar a quantidade de dígitos que você precisa, para colocar 2 dígitos você faz assim:

- C: `printf("%02d", valor)`
- Javascript: `console.log(String(valor).padStart(2, "0"))`
- Python: `print("{:02d}".format(valor))`

Você pode usar o operador de módulo usando ano % 100 para pegar só os dois últimos dígitos do ano.
