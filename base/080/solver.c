#include <stdio.h>
#include <stdbool.h>

//se existir, retorna a posicao, se não retorna -1
int find(int vet[], int size, int value){
    for(int i = 0; i < size; i++)
        if(vet[i] == value)
            return i;
    return -1;
}

//olha pra tras e vês se o elemento de vet[pos] já apareceu antes
bool repetida(int vet[], int size, int pos){
    for(int i = 0; i < pos; i++)
        if(vet[i] == vet[pos])
            return true;
    return false;
}

//mostra o vetor ou então N
void show(int vet[], int size){
    if(size == 0)
        puts("N");
    else{
        for(int i = 0; i < size; i++){
            if(i != 0)
                printf(" ");
            printf("%d", vet[i]);
        }
        puts("");
    }
}

int main(){
    int max = 0;
    int size = 0;
    scanf("%d %d", &max, &size);
    int vet[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &vet[i]);
    

    int trocar[size];
    int trocar_size = 0;
    //olha pra tras e verifica se ja apareceu esse numero no vetor
    for(int i = 0; i < size; i++)
        if(repetida(vet, size, i))
            trocar[trocar_size++] = vet[i];
    

    int faltante[max];
    int faltante_size = 0;
    //verifica se esse número está no vetor
    for(int i = 1; i <= max; i++){
        if(find(vet, size, i) == -1)
            faltante[faltante_size++] = i;
    }

    show(trocar, trocar_size);
    show(faltante, faltante_size);
}