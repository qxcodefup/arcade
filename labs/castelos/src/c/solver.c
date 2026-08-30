#include <stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    for(int i = 1;; i++){
        if(i * i == number){
            puts("sim");
            break;
        }if(i * i > number){
            puts("nao");
            break;
        }
    }
}