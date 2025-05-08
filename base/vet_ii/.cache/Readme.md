# Carregando vetor na mesma linha

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/vet_ii/cover.jpg)

## Contexto

Ao lidar com grandes volumes de dados em sequência, é comum ler e armazenar todos os elementos de uma vez para otimizar o processo. Nessa situação, é preciso ler múltiplos valores de uma única linha e carregá-los em um vetor para processamento e exibição subsequente. Neste exercício, os elementos serão lidos e exibidos de maneira compacta.

### Entrada

- A primeira linha contém um número inteiro **N** representando a quantidade de elementos.
- A segunda linha contém **N** inteiros, separados por espaços, que devem ser inseridos no vetor.

### Saída

- Imprima o vetor carregado entre colchetes, com os elementos separados por espaços.

### Restrições

- **0 ≤ N ≤ 1000** (O vetor pode ter de 0 a 1000 elementos)
- Cada elemento será um número inteiro.

## Testes

```py
>>>>>>>> INSERT
3
1 2 3
======== EXPECT
[ 1 2 3 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
======== EXPECT
[ ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
6
======== EXPECT
[ 6 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1 2 3 4 5
======== EXPECT
[ 1 2 3 4 5 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
4 2 3 1
======== EXPECT
[ 4 2 3 1 ]
```
