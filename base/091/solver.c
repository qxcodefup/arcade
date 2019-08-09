#include <stdio.h>

int mmc(int n1, int n2){
    int a = n1;
    while(1){
        if((a % n1 == 0) && (a % n2 == 0))
            return a;
        a++;
    }
}

int main(){

    int n1 = 0, n2 = 0;

    scanf("%d %d ", &n1, &n2);

    if(n1 > n2)
        printf("%d\n", mmc(n1, n2));
    else
        printf("%d\n", mmc(n2, n1));

    return 0;
}