## #vetores L3 - Abastecimento de água


![](__capa.jpg)

## Motivação

Para amenizar os efeitos da seca, o prefeito contratou uma quantidade **Q** de caminhões-pipa para abastecer uma quantidade **N** de casas em uma certa rua.

Nessa rua, as casas são todas vizinhas e são numeradas de 0,1,2...**N**\-1.  
Cada caminhão tem uma rota (ponto **A** e **B**) e uma quantidade de água **L** que deve abastecer em cada casa. Ou seja, um caminhão começa na casa **A**, e acrescenta  a quantidade **L** de água em cada casa até chegar em **B** (inclusive).

O prefeito quer saber exatamente como a distribuição de água está sendo feita, então ele pediu sua ajuda para relatar a quantidade de água de cada casa.

## Ação

Imprima o vetor com a quantidade de água que cada casa foi abastecida.

### Entrada

*   **N** (quantidade de casas) e **Q** (quantidade decaminhões)
    
*   Nas próximas **Q** linhas: o ponto **A**, **B** e a quantidade inteira **L** de água de cada caminhão.

### Saída

*   Vetor com o total de água de cada casa.

## Exemplos

```
>>>>>>>>
5 1
0 2 1  
========
1 1 1 0 0
<<<<<<<<
  
>>>>>>>>
5 2
0 2 1
2 4 2
========
1 1 3 2 2
<<<<<<<<

>>>>>>>>
10 5
1 4 5
5 8 2
0 9 1
8 9 3
4 8 2
========
1 6 6 6 8 5 5 5 8 4
<<<<<<<<

>>>>>>>>
4 4
0 0 1
1 1 2
2 2 3
3 3 4  
========
1 2 3 4
<<<<<<<<
```

## Ajuda

### Dica
- O vetor deve ser preenchido com zero.

- Use o `A` como ponto inicial do laço e o `B` como ponto final.

### Pseudocódigo
```
Ler N 
Ler Q

// preencher o vetor com zero
Enquanto ( auxiliar menor que N ):
    vetor[auxiliar] recebe 0

Enquanto ( i menor que Q ):
    Ler A
    Ler B
    Ler L

    // A ponto inicial e B ponto final
    j recebe A 
    Para ( j menor ou igual B ):
        vetor[j] recebe vetor[j] + L

Mostrar (vetor) 
```

- Para mostrar/ler um vetor é necessário um laço/estrutura de repetição. Exemplo:
```
Ler N

Enquanto ( i < N ):
    Ler vetor[i] // mostrar vetor[i]
```