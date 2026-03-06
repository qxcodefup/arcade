# Mulher mais idosa

![_](cover.jpg)

## Contexto

Sua tarefa é ler os dados de um grupo de pessoas e informar o nome da mulher mais idosa. Primeiro, você deve ler todas as informações e armazená-las em um vetor de `structs`. Cada pessoa será representada por seu nome, idade e sexo.

Depois de armazenar os dados, processe o vetor para encontrar a mulher com a maior idade.

### Entrada

- A primeira linha contém um número inteiro **N**, representando a quantidade de pessoas no grupo.
- As **N** linhas seguintes contêm os dados de cada pessoa: nome, idade e sexo ('m' ou 'f'), separados por espaços.

### Saída

- O nome da mulher mais idosa do grupo.
- Caso não haja mulheres no grupo, imprima **"nao ha mulher"**.

### Restrições

- O nome não terá espaços e terá no máximo 20 caracteres.

### Testes

``` py
>>>>>>>> INSERT 01
2
ana 80 f
joao 43 m
======== EXPECT
ana
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
2
jose 80 m
joao 43 m
======== EXPECT
nao tem mulher
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
3
joao 43 m
ana 80 f
melissa 34 f
======== EXPECT
ana
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 04
3
joao 88 m
ana 80 f
melissa 84 f
======== EXPECT
melissa
<<<<<<<< FINISH
```
