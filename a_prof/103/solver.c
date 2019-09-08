#include <stdio.h>
#include <stdbool.h>

bool verifica_vogal(char value){
    if(value == 'a' || value == 'A' || value == 'e' || value == 'E' || value == 'i' || value == 'I' || value == 'o' || value == 'O' || value == 'u' || value == 'U')
        return true;
    return false;
}

int main(){
    char texto[50];
    scanf("%[^\n]", texto);

    for(int a = 0; texto[a]; a++){
        printf("%c", texto[a]);
        if(verifica_vogal(texto[a]) && !verifica_vogal(texto[a + 1]) && texto[a + 1] != ' ' && texto[a + 1])
            printf("-");
    }
    printf("\n");
}