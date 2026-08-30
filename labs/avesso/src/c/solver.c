#include<stdio.h>
#include<stdlib.h>

void mostrar(int * vet, int size){
    printf("[%d", vet[0]);
    for(int i = 1; i < size; i++)
        printf(" %d", vet[i]);
    printf("]\n");
}

void inverter(int * vet, int size, int valor){
    for(int i = 0; i < size; i++)
        if(vet[i] == valor || vet[i] == -valor){
            if(i != 0)
                vet[i - 1] *= -1;
            if(i != size - 1)
                vet[i + 1] *= -1;
        }
}

void avesso(){
    int tam = 0, grito = 0;
    scanf("%d%d", &tam, &grito);
    int vetor[tam];
    for(int i = 0; i < tam; i++) //ler vetor
        scanf("%d", &vetor[i]);

    inverter(vetor, tam, grito);
    mostrar(vetor, tam);
}

int main(){    
    int qte = 0;
    scanf("%d", &qte);
    for(int i = 0; i < qte; i++){
        avesso();
    }
}