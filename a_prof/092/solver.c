#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    fgets(line, 99, stdin);
    for(int a = strlen(line) - 2; a >= 0; a--)
        printf("%c", line[a]);
    printf("\n");
    return 0;
}