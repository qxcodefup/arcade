#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if(c >= 65 && c <= 90)
        printf("%c\n", c + 32);
    else if(c >= 97 && c <= 122)
        printf("%c\n", c - 32);
    else
        printf("%c\n", c);
}