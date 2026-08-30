#include <stdio.h>
#include <stdlib.h> // abs

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int valorAbsoluto = abs(a - b);
    printf("%d\n", valorAbsoluto);
}
