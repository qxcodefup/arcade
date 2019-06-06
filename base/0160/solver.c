#include<stdio.h>

int main()
{
   int teste=0; /* Teste atual */
   int rodadas=1; /* Numero de rodadas */
   int aldo, beto; /* Figurinhas de cada jogador */
   int a, b; /* Figurinhas viradas na rodada */
   int i; /* Iterador */

   scanf("%d", &rodadas);
   while(rodadas) { /* Termina quando rodadas = 0 */
      printf("Teste %d\n", ++teste);
		aldo=0; beto=0;
      for(i=0;i<rodadas;i++) {
         scanf("%d %d", &a, &b);
         aldo+=a;
         beto+=b;
      }
      if(aldo>beto) printf("Aldo\n\n");
      else printf("Beto\n\n");
      scanf("%d", &rodadas);
   }

   return 0;
}
