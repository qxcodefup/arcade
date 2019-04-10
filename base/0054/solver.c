#include <stdio.h>

void dots(int qtd){
    for(int i = 0; i < qtd; i++)
        printf(".");
}
void numbers(int qtd, int value){
    printf("%d", value);
    for(int i = 0; i < (qtd - 1); i++)
        printf(".%d", value);
}
int main(){
    int value = 0;
    scanf("%d", &value);
    for(int i = 0; i < value; i++){
        dots(value - 1 - i);//...
        numbers(i + 1, value);//6.6.6
        dots(value - 1 - i);//...
        printf("\n");
    }
}