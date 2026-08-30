#include <stdio.h>

int main(){
    int value;

    scanf("%d", &value);

    int vet[8];

    for(int a = 0; a < 8; a++){
        if(value != 0){
            vet[a] = value % 10;
            value /= 10;
        }else{
            vet[a] = 100000000;
        }

    }

    for(int a = 7; a >= 0; a--){
        if(vet[a] != 100000000){
            printf("%d", vet[a]);
        }
        if(a != 0 && vet[a] != 100000000){
            printf(" ");
        }
    }
    printf("\n");
}