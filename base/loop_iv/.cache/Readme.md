# Loop em ambas as direções

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/loop_iv/cover.jpg)

## Contexto

Muitas vezes, ao lidar com problemas que envolvem intervalos numéricos, precisamos percorrer esses intervalos tanto em ordem crescente quanto decrescente. Com essa atividade, você aprenderá a criar loops flexíveis que funcionam em ambas as direções, dependendo dos valores de entrada.

Dado dois números inteiros **A** e **B**, faça um loop que percorra todos os números entre **A** e **B**, incrementando ou decrementando conforme necessário, e imprimindo os números na mesma linha entre colchetes, excluindo **B** da impressão.

### Entrada

- Dois números inteiros **A** e **B**, separados por espaço.

### Saída

- Uma linha com os números inteiros entre **A** e **B**, excluindo B, dentro de colchetes.

### Restrições

- Não há restrições quanto a valores negativos ou positivos, desde que A seja um número inteiro e B também.

## Desafio

Após resolver o problema como preferir, tente pensar em uma solução que utilize apenas um único loop para percorrer os números, independentemente se A for maior ou menor que B.

## Testes

```py
>>>>>>>> INSERT
10 0
======== EXPECT
[ 10 9 8 7 6 5 4 3 2 1 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 10
======== EXPECT
[ 0 1 2 3 4 5 6 7 8 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0 -5
======== EXPECT
[ 0 -1 -2 -3 -4 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5 10
======== EXPECT
[ 5 6 7 8 9 ]
<<<<<<<< FINISH
```
