#include <stdio.h>

void modifica_vetor(int qtd, int size_vet, int gritos[qtd], int vet[size_vet]){
    for(int a = 0; a < size_vet; a++)
        for(int i = 0; i < size_vet; i++)
            if(vet[i] == gritos[a] || -vet[i] == gritos[a]){
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
    int qtd = 0, size = 0;
    scanf("%d %d ", &size, &qtd);

    int vet[size];
    int gritos[qtd];

    for(int a = 0; a < size; a++)
        scanf("%d", &vet[a]);

    for(int a = 0; a < qtd; a++)
        scanf("%d", &gritos[a]);

    for(int a = 0; a < qtd; a++)
        modifica_vetor(qtd, size, gritos, vet);

    show(size, vet);
    
    return 0;
}