#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char frase[100];
    scanf("%[^\n]", frase);

    char verifi[100];
    verifi[0] = frase[0];
    int x = 1;

    for(int a = 1; a < strlen(frase); a++)
        if(frase[a - 1] == ' '){
            verifi[x] = frase[a];
            x++;
        }

    bool ordem = true;

    for(int a = 0; a < strlen(verifi) - 1; a++)
        if(verifi[a] > verifi[a + 1]){
            ordem = false;
            break;
        }

    printf("%s\n", (ordem) ? "sim" : "nao");
}