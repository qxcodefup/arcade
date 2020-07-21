## ©04_vetores L3 - As unhas de Luiza - Vetor para inteiro


![](__capa.jpg)

## Motivação

Luzia estava apaixonada. Mandou pintar em cada unha dos dedos das mãos o cpf do seu amor.  
Pensava ela: "sozinhos esses números, não são nada, mas juntos são o número do meu xuxuzinho.

\[DS\]

## Ação  

Faça um programa que deve transformar um vetor em um número inteiro e retornar esse valor inteiro. Todos os elementos do vetor devem conter apenas um dígito.

### Entrada

- Um numero que representa o tamanho do vetor e seus elementos, um por linha.  

### Saida

- O valor inteiro resultado do programa.

## Exemplos

```
>>>>>>>>
3
1
2
3
========
123
<<<<<<<<

>>>>>>>>
4
3
4
5
1
========
3451
<<<<<<<<

>>>>>>>>
2
1
2
========
12
<<<<<<<<

>>>>>>>>
5
5
4
3
2
1
========
54321
<<<<<<<<
```

## Ajuda

### Dica
- Você pode formar um novo número utilizando multiplicação e soma. Por exemplo:
```
0 * 10 + 1, caso queira formar o número 1

1 * 10 + 2, caso queira formar o número 12

12 * 10 + 3, caso queira formar o número 123

123 * 10 + 4, caso queira formar o número 1234
```

### Pseudocódigo
```
Ler quantidade
Ler vetor

numero = vetor[0]
Para (auxiliar < quantidade):
    numero = numero * 10
    numero = numero + vetor[auxiliar]

Mostrar (numero)
```

- Lembrando que para ler um vetor é necessário o laço/estrutura de repetição. Exemplo:
```
Ler quantidade

Enquanto (auxiliar < quantidade ):
    Ler entrada
    vetor[auxiliar] = entrada
```



