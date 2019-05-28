#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    char palavra[100];

    scanf("%[^\n]", frase);

    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] != ' '){
            palavra[i] = frase[i];
            printf("%c", frase[i]);
        }else
            for(int a = i + 1; a < strlen(palavra); a++)
                printf("%c", palavra[a]);
    }

    printf("\n");

    return 0;
}