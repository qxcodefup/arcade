#include <stdio.h>
#include <stdbool.h>

//se existir, retorna a posicao, se não retorna -1
bool find(int vet[], int size, int value){
    for(int i = 0; i < size; i++)
        if(vet[i] == value)
            return true;
    return false;
}

//mostra o vetor ou então N
void show(int vet[], int size){
    if(size == 0){
        puts("N");
        return;
    }
    for(int i = 0; i < size; i++){
        if(i != 0)
            printf(" ");
        printf("%d", vet[i]);
    }
    puts("");
}

int main(){
    int max = 0;
    int vet_size = 0;
    scanf("%d %d", &max, &vet_size);
    int vet[vet_size];
    for(int i = 0; i < vet_size; i++)
        scanf("%d", &vet[i]);
    
    int unicos[vet_size];
    int unicos_size = 0;
    int trocar[vet_size];
    int trocar_size = 0;
    //olha pra tras e verifica se ja apareceu esse numero no vetor
    for(int i = 0; i < vet_size; i++) {
        if(find(unicos, unicos_size, vet[i])){
            trocar[trocar_size++] = vet[i];
        } else {
            unicos[unicos_size++] = vet[i];
        }
    }

    int faltante[max + 1];
    int faltante_size = 0;
    //verifica se esse número está no vetor
    for(int valor = 1; valor <= max; valor++){
        if(! find(unicos, unicos_size, valor))
            faltante[faltante_size++] = valor;
    }

    show(trocar, trocar_size);
    show(faltante, faltante_size);
}