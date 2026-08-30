#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int inc = 1;
    if (a > b) {
        inc = -1;
    }
    printf("[ ");
    for (int i = a; i != b; i += inc) {
        printf("%d ", i);
    }
    printf("]\n");
}