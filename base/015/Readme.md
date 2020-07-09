## ©02_seleção L1 - Calculadora Numérica


![](__capa.jpg)

### Motivação

Quem nunca numa prova de matemática ou física no ensino médio escutou um coleguinha dizer: "Professor, pode usar a calculadora?" que atire a primeira pedra.

### Ação

Leia dois números inteiros e um símbolo e imprima o resultado.

### Entrada:

* Leia do usuário dois valores inteiros e um operador em caractere ('+', '-', '\*' ou '/')

### Saída:

* Imprima o resultado da operação em inteiro. Nunca haverá divisão por 0.

## Exemplos
```
>>>>>>>>
5
2
/
========
2
<<<<<<<<

>>>>>>>>
3
5
+
========
8
<<<<<<<<

>>>>>>>>
7
9
/
========
0
<<<<<<<<
```

## Ajuda

Observação
* O `operador` deve ser recebido em uma variável do tipo `char`. Exemplo:
  
```c
    char operador;

    scanf(" %c", &operador);
```

Pseudocódigo
```
Leia primeiro_numero
Leia segundo_numero
Leia sinal

Se (sinal for igual a '+'):
    Mostre primeiro_numero + segundo_numero
Se (sinal for igual a '-'):
    Mostre primeiro_numero - segundo_numero
Se (sinal for igual a '*'):
    Mostre primeiro_numero * segundo_numero

Se (sinal for igual a '/') e (segundo_numero for igual a 0):
    Mostre "Operacao invalida! Divisao por zero"
Se (sinal for igual a '/') e (segundo_numero for diferente de 0):
    Mostre primeiro_numero / segundo_numero         
```



