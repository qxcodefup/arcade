#include <stdio.h>
#include <string.h>

int main(){
    char texto[101];
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    int tsize = strlen(texto);

    int pos = 1;
    for(int i = 1; i < tsize; i++){
        if(texto[i] == ' ' && texto[i + 1] == texto[pos - 1])
            i++;
        else
            texto[pos++] = texto[i];
    }
    texto[pos] = '\0';
    puts(texto);
}
