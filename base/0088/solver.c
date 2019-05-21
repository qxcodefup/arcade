#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    float values[n];

    for(int a = 0; a < n; a++)
        scanf("%f", &values[a]);

    if(n % 2 == 0){
        n /= 2;
        printf("%0.1f", ((values[n - 1] + values[n]) / 2));
    }else{
        n /= 2;
        printf("%0.1f", values[n]);
    }

    printf("\n");

    return 0;
}