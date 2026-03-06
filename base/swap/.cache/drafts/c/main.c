#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b);

int main(){
   int x, y;
   scanf("%d %d", &x, &y);
   
   // Chame a função 'troca' para trocar os valores de x e y.
   troca(&x, &y);
   
   printf("%d %d\n", x, y);
}
