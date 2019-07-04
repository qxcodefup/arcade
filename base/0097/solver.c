#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    scanf("%[^\n]", frase);
    int cont = 0;

    for(int i = 0; i <= strlen(frase); i++){
        if(frase[i] != ' ' && i <= strlen(frase) - 1){
            printf("%c", frase[i]);
            cont++;
        }else{
            printf(" ");
            for(int a = i - cont; a < i; a++)
                printf("%c", frase[a]);
            if(i != strlen(frase))
                printf(" ");
            cont = 0;
        }
    }

    printf("\n");

    return 0;
}