#include<stdio.h>

#define PMAX 100

int main()
{
   int teste=0; /* Teste atual */
   int participantes, rodadas; /* Numero de participantes e de rodadas */
   int part[PMAX]; /* Participante atualmente na posicao */
   int npart; /* Numero de participantes da rodada */
   int ordem; /* Ordem dada pelo chefe */
   int acao; /* Acao atual */
   int posacao; /* Posicao de quem executa a acao atualmente */
   int i,j,k; /* Iteradores */

   scanf("%d %d", &participantes, &rodadas);
   while(participantes || rodadas) { /* Termina quando ambos forem 0 */
      printf("Teste %d\n", ++teste);

      for(i=0;i<participantes;i++) scanf("%d",&(part[i])); /* Le posicao dos 
                                                              participantes */

      for(i=0;i<rodadas;i++)
      {
         scanf("%d %d", &npart, &ordem);

         posacao=0; /* A primeira acao sera executada pelo primeiro da fila 
                       sempre */
         for(j=0;j<npart;j++)
         {
            scanf("%d",&acao);

            /* Participante acertou - Passa para o proximo */
            if(acao == ordem) posacao++;

            /* Participante errou - Elimina o participante */
            else for(k=posacao+1;k<npart;k++) part[k-1]=part[k];
         }
      }

      printf("%d\n\n", part[0]);

      scanf("%d %d", &participantes, &rodadas);
   }

   return 0;
}
