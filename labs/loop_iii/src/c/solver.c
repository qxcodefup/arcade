#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("[ ");
    for (int i = a; i > b; i--) {
        printf("%d ", i);
    }
    printf("]\n");
}