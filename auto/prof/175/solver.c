#include <stdio.h>

#define MAX_SIZE 100

int main(){

    char frase[MAX_SIZE];

    scanf("%[^\n]", frase);

    for(int i = 0; i < MAX_SIZE; i++){
        if(frase[i] == '#' || frase[i] == ';')
            frase[i] = '\n';
    }

    printf("%s", frase);

    return 0;
}