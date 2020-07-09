## ©02_seleção L2 - Quantos são iguais? (Contando Repetidos)


![](__capa.jpg)

## Motivação

Três competidores olímpicos de arremesso de disco tinham desempenhos muito parecidos. Constantemente eles jogavam os discos à mesma distância. Decidiram então criar um algoritmo que informava quantos deles tinham conseguido o mesmo resultado.

## Ação

Leia três valores do usuário e imprima quantos são iguais.

### Entrada:
- Leia três valores do usuário.
### Saída:
- Imprima a quantidade de valores iguais dentre os três.


## Exemplos

```
>>>>>>>> 01
1
4
4
========
2
<<<<<<<<


>>>>>>>> 02
1
5
4
========
0
<<<<<<<<

>>>>>>>> 03
1
1
1
========
3
<<<<<<<<
```

## Ajuda

Pseudocódigo
```
Ler primeiro_valor
Ler segundo_valor
Ler terceiro_valor

quantidade_iguais recebe 0

Se (primeiro_valor for igual a segundo_valor):
    quantidade_iguais recebe 2
Se (primeiro_valor for igual a terceiro_valor):
    quantidade_iguais recebe 2
Se (segundo_valor for igual a terceiro_valor):
    quantidade_iguais recebe 2
Se (primeiro_valor for igual a segundo_valor e segundo_valor for igual a terceiro_valor):
    quantidade_iguais recebe 3

Mostrar (quantidade_iquais)
```

