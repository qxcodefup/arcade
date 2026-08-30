#include <stdio.h>

int find_abs(int vet[], int size, int value){
    for(int i = 0; i < size; i++)
        if(vet[i] == value || vet[i] == -value)
            return i;
    return -1;
}

void inverte_ao_lado(int vet[], int size, int pos){
    if(pos < 0 || pos >= size)
        return;
    if(pos > 0)
        vet[pos - 1] *= -1;
    if(pos < size - 1)
        vet[pos + 1] *= -1;
}

void show(int vet[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        if(i != 0)
            printf(" ");
        printf("%d", vet[i]);
    }
    printf("]\n");
}

int main(){
    int vet_size = 0, gritos_size = 0;
    scanf("%d %d ", &vet_size, &gritos_size);

    int vet[vet_size];
    int gritos[gritos_size];

    for(int i = 0; i < vet_size; i++)
        scanf("%d", &vet[i]);

    for(int i = 0; i < gritos_size; i++)
        scanf("%d", &gritos[i]);

    for(int i = 0; i < gritos_size; i++){
        int pos = find_abs(vet, vet_size, gritos[i]);
        inverte_ao_lado(vet, vet_size, pos);
    }

    show(vet, vet_size);
    
    return 0;
}