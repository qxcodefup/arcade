#include<stdio.h>
#include <string.h>

int main(){
    char frase[100], letra;
    scanf("%[^\n] ", frase);
    scanf("%c", &letra);
    int cont = 0;
        
    if(letra <= 90 && letra >= 65)
        letra += 32;

    for(int i = 0; i < strlen(frase); i++)
        if(frase[i] <= 90 && frase[i] >= 65)
            frase[i] += 32;

    for(int i = 0; i < strlen(frase); i++)
        if(letra == frase[i])
            cont++;
            
    printf("%d\n", cont);
}