# Loop com continue e break

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/loop_v/cover.jpg)

## Contexto

A compreensão do uso de loops infinitos e dos comandos continue e break é fundamental para otimizar a execução de loops em programação. Essa atividade vai te ajudar a exercitar essas habilidades através de uma sequência numérica, excluindo números pares e parando no ponto certo.

Leia dois números inteiros **A** e **B**, onde **A** será sempre menor ou igual a B. Utilize um loop infinito para imprimir todos os números ímpares entre **A** e **B**, excluindo **B** da impressão.

- Faça um loop infinito com `for` ou `while`.
- Utilize `continue` para pular os números pares.
- Utilize `break` para parar o loop ao atingir B.
- Cuide para não criar um loop infinito sem controle.

### Entrada

- Dois números inteiros **A** e **B**, separados por espaço.

### Saída

- Uma linha com os números ímpares entre **A** e **B**, excluindo **B**, dentro de colchetes

### Restrições

- **A** sempre será menor ou igual a **B**

## Testes

```py
>>>>>>>> INSERT
0 10
======== EXPECT
[ 1 3 5 7 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5 10
======== EXPECT
[ 5 7 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-5 10
======== EXPECT
[ -5 -3 -1 1 3 5 7 9 ]
<<<<<<<< FINISH
```
