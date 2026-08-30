#include <stdio.h>

int main(){
    float vet[] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.10, 0.05};
    int size = sizeof(vet) / sizeof(int);
    float value = 0;
    scanf("%f", &value);
    for(int i = 0; i < size; i++){
        if(value >= vet[i]){
            int qtd = (int) (value / vet[i]);
            if(qtd != 0){
                printf("%d de %.2f\n", qtd , vet[i]);
                value -= qtd * vet[i];
            }
        }
    }
    if(value > 0.009)
        printf("Falta %.2f\n", value);
}