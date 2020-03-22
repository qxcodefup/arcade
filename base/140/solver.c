#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    char letra = '0';
    fgets(frase, sizeof(frase), stdin);
    scanf(" %c", &letra);
    frase[strlen(frase)] = '\0';
    int contador = 0;
    int size = strlen(frase);
    for(int i = 0; i < size; i++){
        if(frase[i] == letra){
            contador++;
        }
    }
    printf("%d\n", contador);
}