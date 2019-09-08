#include <stdio.h>
int main(){
    float produto = 0;
    char a = '0';
    float b = 0;
    scanf("%f %c %f", &b, &a, &produto);
    if(b > produto && a == 'm'){
        puts("segundo");
    }else if(b < produto && a == 'M'){
        puts("segundo");
    }else if(b > produto && a == 'M'){
        puts("primeiro");
    }else if(b < produto && a == 'm'){
        puts("primeiro");
    }else{
        puts("empate");
    }
}
 