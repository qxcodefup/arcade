#include <math.h>
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", (int) fmax(a, b));
}