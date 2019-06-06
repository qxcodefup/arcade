#include <stdio.h>
#include <string.h>
int main(void){
    char text[200];
    fgets(text, sizeof(text), stdin);
    for(int i = 0; text[i] != '\n'; i++){
        printf("%c", text[i]);
        while(text[i] == ' ' && text[i + 1] == ' ')
            i++;
    }
    printf("\n");
    return 0;
}