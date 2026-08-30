#include <stdio.h>

int main() {
    int procurado = 0, size = 0, contador = 0;
    scanf("%d %d", &procurado, &size);

    int vetor[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &vetor[i]);

    for (int i = 0; i < size; i++)
        if (vetor[i] == procurado)
            contador++;
    printf("%d\n", contador);

    return 0;
}
