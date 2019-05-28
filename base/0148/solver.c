#include <stdio.h>

typedef struct {
   int num1;
   int num2;
   char operador;
} expressao;

void calcula_expressao(expressao e)
{
   switch (e.operador) {
      case '+': printf("%d", e.num1 + e.num2);
                break;
      case '-': printf("%d", e.num1 - e.num2);
                break;
      case '*': printf("%d", e.num1 * e.num2);
                break;
      case '/': printf("%d", e.num1 / e.num2);
   }   
}

int main()
{
   expressao e;
   scanf("%d\n%d\n%c", &e.num1, &e.num2, &e.operador);
   calcula_expressao(e);
}
