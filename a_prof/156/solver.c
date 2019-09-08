#include <stdio.h>
int main(){
    int P = 0;
    int D_1 = 0;
    int D_2 = 0;
    scanf("%d %d %d", &P, &D_1, &D_2);
    int aux = D_1 + D_2;
    if((aux % 2) == 0){
        if(P == 0)
            puts("0");
        else
            puts("1");
    }else{
        if(P == 1)
            puts("0");
        else
            puts("1");
    }
}