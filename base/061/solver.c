#include <stdio.h>

int main () {
    int n, i;
    scanf("%d", &n);
    int vetor[n];
    
    for (i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    printf("[ ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", vetor[i]);
    printf("]\n");
    
    return 0;
}