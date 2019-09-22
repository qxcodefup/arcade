#include <stdio.h>

int main(){
    int value;
    char c;
    do{
        scanf("%d%c", &value, &c);
        printf("%d ", value);
    }while(c != '\n');
    print("\n");
}