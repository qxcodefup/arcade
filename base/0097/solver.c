#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    int cont = 0;

    scanf("%[^\n]", frase);

    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] != ' '){
            printf("%c", frase[i]);
            cont++;
        }else{
            printf(" ");
            for(int a = i - cont; (frase[a] != ' ' || frase[a] == '\0') ; a++)
                printf("%c", frase[a]);
            printf(" ");
            cont = 0;
        }
    }

    printf("\n");

    return 0;
}