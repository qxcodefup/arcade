# Separando vogais de consoantes

![_](cover.jpg)

## Contexto

Imagine que você está encarregado de organizar a fila do Restaurante Universitário (RU) de uma forma um tanto inusitada. Em vez de separar por curso ou por quem chegou primeiro, você decide criar duas filas baseadas nas letras de uma palavra-chave: uma fila para as "vogais" e outra para as "consoantes".

Sua tarefa é criar um programa que aplique essa mesma lógica a qualquer frase. Ele deve extrair todas as vogais e exibi-las em uma linha, e fazer o mesmo com as consoantes em uma segunda linha, ignorando os espaços.

### Entrada

- Uma frase de até **100** caracteres, contendo apenas letras minúsculas e espaços.

### Saida

- A primeira linha deve conter todas as vogais da frase original, na ordem em que aparecem.

- A segunda linha deve conter todas as consoantes da frase original, na ordem em que aparecem.

### Restrições

- A frase terá no máximo **100** caracteres.

- A entrada conterá apenas letras minúsculas e espaços.

### Testes

``` py
>>>>>>>> INSERT
um abraco amigo
======== EXPECT
uaaoaio
mbrcmg
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
meteoro de pegasus
======== EXPECT
eeooeeau
mtrdpgss
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
hora de morfar
======== EXPECT
oaeoa
hrdmrfr
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
thunder thunder thunder cats owwww
======== EXPECT
ueueueao
thndrthndrthndrctswwww
<<<<<<<< FINISH
```
