#include <stdio.h>

int main(){
    int value;

    scanf("%d", &value);

    int vet[8];

    for(int a = 0; a < sizeof(value)/sizeof(int); a++)
        vet[a] = value;
}