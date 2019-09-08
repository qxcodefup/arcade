#include <stdio.h>

int main()
{
    int A, B, soma = 0, i;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A > B)
    {
        printf("invalido\n");
    }

    else
    {
        for (i = A; i <= B; i++)
        {
            if (i % 2 == 0 && i % 3 == 0)
                soma = soma + i;
        }

        printf("%d\n", soma);
    }

    return 0;
}
