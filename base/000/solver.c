#include<stdio.h>

int main( ){
    int A,B;
    scanf("%d%d", &A, &B);
    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%.2f\n", (1.0 * A) / B); 
    printf("%d\n", A % B);
    return 0;
}