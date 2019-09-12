#include <stdio.h>
#include <string.h>
int main(void){
    char s[102];
    fgets(s, sizeof(s), stdin);
    for(int i = 0; s[i] != '\n'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u')
            printf("%c", s[i]);
    }
    printf("\n");
    for(int i = 0; s[i] != '\n'; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
            s[i] != 'o' && s[i] != 'u' && s[i] != ' ')
            printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}