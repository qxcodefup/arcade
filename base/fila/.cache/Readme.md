# - Separar Pares e Ímpares

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/fila/cover.jpg)

## Contexto

Você foi encarregado de organizar a fila do Restaurante Universitário (RU). Para agilizar o processo, você teve a brilhante ideia de dividir a fila em dois grupos: uma fila para professores e STAs, e outra para alunos.

- Professores e STAs (servidores) serão representados pelos números pares.
- Alunos serão representados pelos números ímpares.

Dado um conjunto de números, divida-os em duas listas: uma contendo os números ímpares (alunos) e outra contendo os números pares (servidores). Imprima as listas na ordem em que os números foram inseridos.

### Entrada

- Um número inteiro **N** (1 ≤ N ≤ 50), representando a quantidade de pessoas na fila.
- **N** números inteiros, onde números ímpares representam alunos e números pares representam servidores.

### Saída

- Na primeira linha, imprima os números ímpares (alunos) na ordem em que foram inseridos, entre colchetes e separados por espaços.
- Na segunda linha, imprima os números pares (servidores) na ordem em que foram inseridos, entre colchetes e separados por espaços.

## Testes

```py
>>>>>>>> INSERT
2
4 2
======== EXPECT
[ ]
[ 4 2 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
2 6 4 1
======== EXPECT
[ 1 ]
[ 2 6 4 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
1 2 5 3 4 9
======== EXPECT
[ 1 5 3 9 ]
[ 2 4 ]
<<<<<<<< FINISH
```
