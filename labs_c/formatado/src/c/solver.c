#include <stdio.h>

void print_vet(int vet[], int size){
    printf("[");
    if(size > 0)
        printf("%d", vet[0]);
    for(int i = 1; i < size; i++)
        printf(", %d", vet[i]);
    printf("]\n");
}

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    while(qtd--){
        int size = 0;
        scanf("%d", &size);
        int vet[size];
        for(int i = 0; i < size; i++)
            scanf("%d", &vet[i]);
        print_vet(vet, size);
    }
}