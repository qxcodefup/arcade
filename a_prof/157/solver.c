#include<stdio.h>

int main()
{
   float precoa, precog; /* Preco do litro do Alcool e da Gasolina */
   float renda, rendg; /* Rendimento do Alcool e da Gasolina, em km/l */

   scanf("%f %f %f %f", &precoa, &precog, &renda, &rendg);

   if ((precoa/renda) < (precog/rendg)) printf("A\n");
   else printf("G\n");

   return 0;
}
