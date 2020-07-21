## ©04_vetores L3 - Batida Policial - Ordenando vetores


![](__capa.jpg)

## Motivação

Durante a batida policial, capitão Nascimento fala:  

*   Perdeu, perdeu, solta as arma, tudo pra parede, em fila, bora bora bora.  
    
*   Zero Um, bota ordem nessa fila!
*   Depois de organizada a fila capitão diz:
*   Zero Um, essa fila tá horrível. Quer voltar a ser aspira Zero UM? Ordena essa fila!

Zero Um arregala os olhos e pergunta:  

*   Ordenar como capitão?
*   Coloca esses caras ordenados por idade Zero Um. Os menores vão apreendidos, mas os maiores vão presos. Vamo vamo vamo!  

## Ação

Implemente uma função que reordena o vetor de inteiros dado como entrada e retorne o vetor ordenado.  
Ordenar é função básica na computação. Que tal implementar o bubblesort? Dê uma olhadinha na internet e descubra como fazer isso.  
  
Também é muito importante que você aprenda como sua linguagem pode fazer a ordenação por você. Todas as linguagens(C, C++, Python, JavaScript, etc) já tem métodos de ordenação prontos e é importante que você aprenda a utilizá-los.  

### Entrada

*   1ª linha: o tamanho do vetor (1 a 50).
    
*   2ª linha: os elementos desordenados.

### Saída

*   Os elementos do vetor ordenados em ordem crescente.

## Exemplos

```
>>>>>>>>
4
8 3 7 4
========
3 4 7 8
<<<<<<<<

>>>>>>>>
5  
1 8 3 7 4
========
1 3 4 7 8
<<<<<<<<
```

## Ajuda

### Dica
- Implemente o algoritmo Bubble Sort;
```
Bubble Sort é um algoritmo de ordenação que pode ser aplicado em Arrays e Listas dinâmicas. Se o objetivo é ordenar os valores em forma decrescente, então, a posição atual é comparada com a próxima posição e, se a posição atual for maior que a posição posterior, é realizada a troca dos valores nessa posição. Caso contrário, não é realizada a troca, apenas passa-se para o próximo par de comparações.
```


### Pseudocódigo do Bubble Sort
```
Para (i=1 ; i<=N ; i++ ):
    Para (j=i+1 ; j<=N ; j++):
        Se ( a[i] > a[j] ):
            auxiliar = a[i]
            a[i] = a[j]
            a[j] = aux
```


