#include <stdio.h>

int verifica_char(char vetor[50], char value){
    for(int i = 0; vetor[i]; i++)
        if(vetor[i] == value)
            return i;
    return -1;
}

int main(){
    char texto[50], a[50], b[50];
    scanf("%[^\n]", texto);
    getchar();
    scanf("%[^\n]", a);
    getchar();
    scanf("%[^\n]", b);
    getchar();

    for(int i = 0; texto[i]; i++){
        int verifica = verifica_char(a, texto[i]);
        if(verifica >= 0){
            texto[i] = b[verifica];
            continue;
        }
        verifica = verifica_char(b, texto[i]);
        if(verifica >= 0)
            texto[i] = a[verifica];
    }
    printf("%s\n", texto);
}