#include <stdio.h>
#include <string.h>

int main(){

    char line[100];

    gets(line);

    for(int a = strlen(line) - 1; a >= 0; a--)
        printf("%c", line[a]);
    printf("\n");

    return 0;
}