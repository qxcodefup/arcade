#include <stdio.h>

int main(){
    int L = 0;
    int R = 0;
    int D = 0;

    scanf("%d %d %d", &L, &R, &D);

    if(R > 50 && L < R){
        if(R > D)
            printf("S\n");
        else
            printf("N\n");
    }else{
        printf("N\n");
    }
}