#include <stdio.h>
#include <stdbool.h>
//usando vetor de ocorrencias

#define LIM 50

int count(int vet[], int qtd, int elem, int init){
    int cont = 0;
    for(int i = init; i < qtd; i++){
        if(vet[i] == elem)
            cont++;
    }
    return cont;
}

int main(){
    int qtd = 0;
    int vet[50];

    scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++)
        scanf("%d", &vet[i]);

    int count_values[qtd];

    for(int i = 0; i < qtd; i++)
        count_values[i] = count(vet, qtd, vet[i], i);

    int max = vet[0];
    int indice_maximo = 0;
    for(int i = 0; i < qtd; i++)
        if(count_values[i] > max)
            max = count_values[i];

    bool print = false;

    for(int i = 0; i < qtd; i++)

        if(count_values[i] == max){
            if(print)
                printf(" ");
            printf("%d", vet[i]);
            print = true;
        }
    printf("\n");

    return 0;
}