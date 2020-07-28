## #04_vetores L3 - Se fosse a mediana eu tinha passado!


![](__capa.jpg)

## Motivação

O filho tirou 5 notas durante o semestre: 6, 6, 7, 7.1, 7.2  
\- Meu filho, sua média em português foi 6.7. Você tá de recuperação.  
\- Mas, mamãe, a culpa é do colégio.  
\- Como assim, do colégio?  
\- Se eles usassem a mediana ao invés da média eu tinha passado direto!

\[DS\]

#### Obs: NÃO use o método pronto de ordenar do PYTHON.

## Ação

O cálculo da mediana consiste em descobrir qual o valor intermediário
do vetor ORDENADO. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este
é o elemento de valor intermediário. Se a quantidade de elementos for par então a médiana é a media entre os dois elementos centrais.

Assim, você deve ordenar o vetor antes de calcular a mediana.

### Entrada

- 1° linha: A quantidade de elementos do vetor.  
- 2a linha: Os elementos em ponto flutuante de forma não ordenada.

### Saída

- O Valor da mediana com até uma casa decimal.

## Exemplos

```
>>>>>>>>
2
2 4
========
3.0
<<<<<<<<

>>>>>>>>
3
0 1 2
========
1.0
<<<<<<<<

>>>>>>>>
4
0 9 3.2 1
========
6.1
<<<<<<<<

>>>>>>>>
5
0 2 9 8 5.1
========
9.0
<<<<<<<<
```

## Ajuda

### Dica
- Implemente uma função que ordene o vetor;

- Você deve ordenar o vetor antes de calcular a mediana;

- Será necessário utilizar o operador `%` (lê-se mod), que retorna o resto da divisão de um número por outro. Ele é útil para saber se um número é `par` ou `impar`.
  
- Se um número % 2 retorna 0, significa que ele é par. Por exemplo:
```
    4 é par pois, 4 % 2 retorna 0

    5 não é par pois, 5 % 2 retorna 3
```
- Se um número % 2 não retorna 0, significa que ele não é par, ou seja, ele é ímpar. Por exemplo:
```
    3 é ímpar pois, 3 % 2 retorna 1

    6 não é ímpar pois, 6 % 2 retorna 0
```

### Pseudocódigo

```
Ler quantidade
Ler vetor

// função que ordena o vetor
Ordenar o vetor

// par
Se ( quantidade % 2 igual 0 ): 
    quantidade recebe quantidade / 2
    Mostrar ( (vetor[quantidade - 1] + vetor[quantidade]) / 2 )
Senao: // impar
    quantidade recebe quantidade / 2
    Mostrar ( vetor[quantidade] )
```

- Lembrando que para ler um vetor é necessário um laço/estrutura de repetição. Por exemplo:
```
Ler N

Para (auxiliar menor N):
    Ler vetor[auxiliar]
```
