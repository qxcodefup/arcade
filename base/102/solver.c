#include <stdio.h>

int main(){
    char texto[200], resultado[200];
    scanf("%[^\n]", texto);

    int i = 0;

    for(int a = 0; texto[a]; a++){
        resultado[i] = texto[a];
        if(resultado[i] != ' ' || texto[a + 1] != ' ')
            i++;
    }
    resultado[i] = '\0';
    printf("%s\n", resultado);
}