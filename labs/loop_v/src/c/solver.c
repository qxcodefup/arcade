#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("[ ");
    int i = a;
    for (;;) {
        if (i % 2 == 0) {
            i += 1;
            continue;
        }
        if (i >= b) {
            break;
        }
        printf("%d ", i);
        i += 1;
    }
    printf("]\n");
}