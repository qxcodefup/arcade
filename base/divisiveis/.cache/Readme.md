# Verificar ambos

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/divisiveis/cover.jpg)

## Motivação

Ao terminar uma prova de matemática, Marcelo e João estavam na dúvida se teriam acertado as questões que perguntavam se um número era divisível por outro. Ao chegar em casa, Marcelo ainda estava com essa duvida, pediu para o seu irmão mais velho, você, ajudá-lo fazendo um programa que diz se um número é divisível por outro.

## Ação

Leia dois inteiros e diga se ambos são divisíveis por 3 ou se ambos são divisíveis por 5.

### Entrada

- Dois números inteiros.

## Saída

- "sim" (sem aspas) caso ambos sejam divisíveis por 3 ou ambos sejam divisíveis por 5.
- "nao" (sem aspas) caso contrário.

## Exemplos

``` py
>>>>>>>> INSERT
5
10
======== EXPECT
sim
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
10
======== EXPECT
nao
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
9
======== EXPECT
sim
<<<<<<<< FINISH

```

## Dicas

Você pode utilizar o operador "%" (lê-se "mod") para verificar se um número é divisível por outro. Lembre-se de verificar se é divisível por ambos os números, ou seja, 3 e 5.

```c
//Exemplo em C
if(10 % 2 == 0)
    printf("10 é par");
```
