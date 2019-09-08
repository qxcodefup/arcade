#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    char busca[50];
    scanf("%[^\n] %[^\n]", frase, busca);
    int x = strlen(frase);
    int y = strlen(busca);
    int contador = 0;
    for(int i = 0; i < x; i++){
        if(frase[i] == busca[0]){
            for(int j = 1; j < y; j++){
                if(frase[i + j] == busca[j]){
                    if(j == (y-1)){
                        contador++;
                    }
                }else{
                    break;
                }
            }
        }
    }
    printf("%d\n", contador);
}