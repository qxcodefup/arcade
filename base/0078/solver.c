#include <stdio.h>

void modifica_vetor(int qtd, int size_vet, int grito, int vet[size_vet]){
    for(int i = 0; i < size_vet; i++)
        if(vet[i] == grito){
            if(i - 1 >= 0)
                vet[i - 1] = -vet[i - 1];
            if(i + 1 < size_vet)
                vet[i + 1] = -vet[i + 1];
        }
}

void show(int size_vet, int vet[size_vet]){
    printf("[");
    for(int a = 0; a < size_vet; a++){
        printf("%d", vet[a]);
        if(a < size_vet - 1)
            printf(" ");
    }
    printf("]\n");
}

int main(){
    int qtd = 0, size_vet = 0, grito = 0;
    scanf("%d %d", &qtd, &size_vet);

    int vet[size_vet];

    for(int a = 0; a < size_vet; a++)
        scanf("%d", &vet[a]);

    for(int i = 0; i < qtd; i++){
        scanf("%d", &grito);
        modifica_vetor(qtd, size_vet, grito, vet);
    }

    show(size_vet, vet);

    return 0;
}