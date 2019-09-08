#include <stdio.h>
#include <string.h>

int power(int a, int b){
    int tmp = 1;
    while(b > 0){
        tmp *= a;
        b--;
    }
    return tmp;
}

int main(){
    int soma = 0, num = 0, i;
    char frase[100];
    scanf("%[^\n]s", frase);
    i = strlen(frase);
    i--;
    while(i > -1){
        if(frase[i] >= '0' && frase[i] <= '9'){
            int temp = 0;
            while(frase[i] != ' ' && i >= 0){
                num += (frase[i] - '0') * power(10, temp);
                temp++;
                i--;
            }
            soma += num;
            num = 0;
        }
        i--;
    }
    printf("%d\n", soma);
}