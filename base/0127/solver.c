#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool verifica_trecho(char frase[100], int inicio, char trecho[20]){
    int b = 0;
    for(int a = inicio; a < strlen(trecho); a++){
        if(frase[a] != trecho[b])
            return false;
        b++;
    }
    return true;
}

int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    char trecho[20];
    scanf("%[^\n]", trecho);
    int cont = 0;

    for(int a = 0; frase[a] != '\0'; a++)
        if(frase[a] == trecho[0])
            if(verifica_trecho(frase, a, trecho)){
                cont++;
                a += strlen(trecho);
            }

    printf("%d\n", cont);
}