#include <stdio.h>

typedef struct {
    int soma;
    int subtracao;
    float divisao;
    int multiplicacao;
} expressao;

int main()
{
    expressao e;
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    
    e.soma = n1 + n2;
    e.subtracao = n1 - n2;
    e.divisao = (float) n1 / n2;
    e.multiplicacao = n1 * n2;
    
    printf("%d %d %.1f %d", e.soma, e.subtracao, e.divisao, e.multiplicacao);
}