#include <stdio.h>
int main() {
    float valor = 0;
    int parcelas = 0;
    scanf("%f %d", &valor, &parcelas);
    int taxa = (parcelas - 1) * 5;
    float total = (1 + taxa/100.0) * valor;
    float vparcela = total / parcelas;
    printf("%.2f\n%.2f\n", vparcela, total);
}