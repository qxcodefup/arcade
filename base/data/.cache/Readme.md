# Formatando data

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/data/cover.jpg)

## Motivação

Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos.

### Entrada

- hora, minuto, dia, mês e ano, um por linha.

## Saída

- hh:mm dd/mm/aa.

## Exemplos

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

```py
>>>>>>>> INSERT
14
7
7
9
2005
======== EXPECT
14:07 07/09/05
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
23
1
1
1
2076
======== EXPECT
23:01 01/01/76
<<<<<<<< FINISH
```

## Ajuda

## Resolução

Seja a variável `valor` um número em inteiro, você pode imprimir essa variável completando com zeros a esquerda até formar a quantidade de dígitos que você precisa, para colocar 2 dígitos você faz assim:

- C: `printf("%02d", valor)`
- Javascript: `console.log(String(valor).padStart(2, "0"))`
- Python: `print("{:02d}".format(valor))`

Você pode usar o operador de módulo usando ano % 100 para pegar só os dois últimos dígitos do ano.
