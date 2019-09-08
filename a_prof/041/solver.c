#include <stdio.h>
int main(){
    char pi = '0';
    int a = 0, b = 0;
    scanf("%c %d %d", &pi, &a, &b);
    int aux = a + b;
    if(pi == 'p'){
        if((aux % 2) == 0){
            puts("Venceu");
        }else{
            puts("Perdeu");
        }
    }else if(pi == 'i'){
        if((aux % 2) != 0){
            puts("Venceu");
        }else{
            puts("Perdeu");
        }
    }
}