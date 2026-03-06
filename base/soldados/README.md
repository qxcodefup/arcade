# Soldados em Posição

![_](cover.jpg)

## Contexto

Os soldados se posicionaram em formação no quartel, formando uma matriz. Cada soldado tem uma numeração única em sua farda. O Comandante, querendo testar sua atenção, deu a seguinte ordem: você deve contar quantas vezes um soldado com numeração menor está posicionado atrás (em uma linha abaixo) de um soldado com numeração maior, dentro da mesma coluna.

Sua tarefa é criar um programa que, dada a matriz da formação, conte o número total dessas ocorrências, analisando cada coluna verticalmente.

### Entrada

- A primeira linha contém dois números inteiros, **nl** e **nc**, representando o número de linhas e colunas da matriz.
- As **nl** linhas seguintes contêm os nc valores da matriz, que representam as numerações dos soldados.

### Saída

- Um número inteiro que representa a quantidade total de vezes que um soldado com número menor foi encontrado atrás de um soldado com número maior na mesma coluna.

### Restrições

- A verificação deve ser feita apenas verticalmente (dentro de cada coluna).

### Testes

``` py
>>>>>>>> INSERT
2 1
2
3
======== EXPECT
0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2 1
4
3
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3 3
2 4 6
3 8 9
1 0 5
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3 3
5 1 9
3 8 4
7 3 2
======== EXPECT
4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3 3
6 2 3
5 4 9
1 8 7
======== EXPECT
3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4 4
6 2 3 5
5 4 9 4
1 8 7 3
1 8 9 2
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5 4
6 2 3 5
5 4 9 4
1 8 7 3
1 8 9 2
0 7 9 1
======== EXPECT
9
<<<<<<<< FINISH

```
