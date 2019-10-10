#include <stdio.h>
#include <stdbool.h>

bool existe(int vet[], int size, int value){
    for(int i = 0; i < size; i++)
        if(vet[i] == value)
            return true;
    return false;
}

bool esta_contido(int v1[], int v1_size, int v2[], int v2_size){
    for(int i = 0; i < v1_size; i++)
        if(!existe(v2, v2_size, v1[i]))
            return false;
    return true;
}

int main(){

    int v1_size = 0;
    scanf("%d", &v1_size);
    int v1[v1_size];
    for(int i = 0; i < v1_size; i++)
        scanf("%d", &v1[i]);

    int v2_size = 0;
    scanf("%d", &v2_size);
    int v2[v2_size];
    for(int a = 0; a < v2_size; a++)
        scanf("%d", &v2[a]);

    bool esta_contido = true;
    for(int i = 0; i < v1_size; i++){
        bool achei = false;
        for(int j = 0; j < v2_size; j++){
            if(v1[i] == v2[j]){
                achei = true;
                break;
            }
        }
        if(!achei){
            esta_contido = false;
            break;
        }
    }
    if(esta_contido)
        puts("sim");
    else
        puts("nao");

    return 0;
}