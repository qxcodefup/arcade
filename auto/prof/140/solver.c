#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    char letra = '0';
    scanf("%[^\n] %s", frase, &letra);
    int contador = 0;
    int x = strlen(frase);
    for(int i = 0; i < x; i++){
        if(frase[i] == letra){
            contador++;
        }
    }
    printf("%d\n", contador);
}