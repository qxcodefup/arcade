# - Revolta em Portugal

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/revolta/cover.jpg)

## Contexto

Um grupo de portugueses planeja fazer uma revolução armada:

- *"Pois, pois, Manoel, como pretendes tomar de assalto a praça?"*
- *"Ora, bolas Joaquim, estamos nós a chegar por lá. Vamos estar a retirar nossas espadas de nossas bainhas e espada-lo-emos todos!"*
- *"Ótima ideia. Vamos pois, ora bolas!"*

Manoel e Joaquim, liderando seus exércitos, enfrentam a difícil tarefa de determinar quem possui mais forças para conquistar a praça. Manoel reúne seus soldados, enquanto Joaquim acredita que entre eles há espiões rebeldes infiltrados.

Cada número ímpar representa um soldado de Manoel, e cada número par representa um rebelde infiltrado de Joaquim.

Dado um vetor de números inteiros, some as forças dos soldados (números ímpares) e dos rebeldes (números pares). Determine quem possui a força maior para vencer a batalha, ou se ocorrerá um empate.

### Entrada

- A primeira linha contém um número inteiro **N** representando o tamanho do vetor (1 ≤ n ≤ 50).

- As próximas **N** linhas contêm números inteiros **X** (1 ≤ x ≤ 50).

### Saída

- **"soldados"** se a soma dos números ímpares for maior que a soma dos números pares.
- **"rebeldes"** se a soma dos números pares for maior que a soma dos números ímpares.
- **"empate"** se ambas as somas forem iguais.

### Restrições

- O vetor conterá entre 1 e 50 elementos.
- Os valores dos elementos do vetor estão entre 1 e 50.

### Testes

``` py
>>>>>>>> INSERT
2
1
2
======== EXPECT
rebeldes
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
1
2
1
======== EXPECT
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
2
3
======== EXPECT
soldados
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
1
2
3
1
======== EXPECT
soldados
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1
2
3
1
4
======== EXPECT
rebeldes
<<<<<<<< FINISH
```
