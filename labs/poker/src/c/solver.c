#include<stdio.h>

#define NCARTAS 5

int main()
{
   int teste=0; /* Teste atual */
   int ntestes; /* Numero de casos de testes */
   int cartas[NCARTAS]; /* Cartas recebidas */
   int carta; /* Carta atual */
   int achei; /* Define quando achou jogada */
   int pontuacao; /* Pontuacao final */
   int x,y; /* Indicadores de maior e menor no Dois Pares */
   int i,j,k; /* Iteradores */

   scanf("%d", &ntestes);
   while(ntestes > 0) { /* Termina quando ntestes for 0 */
      printf("Teste %d\n", ++teste);

      pontuacao=0; /* Considera que nao ganhou nada, inicialmente */

      for(i=0;i<NCARTAS;i++) { /* Le as cartas e ja as ordena */
         scanf("%d",&carta);
         for(j=0;j<i;j++) { /* Inserindo na ordem */
            if(carta<cartas[j])
            {
               for(k=i;k>j;k--) cartas[k]=cartas[k-1]; /* Deslocamento */
               cartas[j]=carta;
               j=i; /* Fim do for */
               carta=0; /* Indica que a carta foi inserida */
            }
         }
         if(carta) cartas[i]=carta;
      }

      /* Validacao das cartas */

      /* Sequencia: 200+x */
      achei=1; /* Sera zerado se constar erro na sequencia */
      for(i=0;i<NCARTAS-1;i++)
      {
         if((cartas[i+1]-cartas[i])!=1)
         {
            achei=0;
            i=NCARTAS; /* Fim do for */
         }
      }
      if(achei) pontuacao=200+cartas[0];
      else /* Quadra: 180+x */
      {
         achei=0;
         for(i=0;i<NCARTAS-3;i++)
         {
            if((cartas[i]==cartas[i+1])&&
               (cartas[i+1]==cartas[i+2])&&
               (cartas[i+2]==cartas[i+3]))
            {
               achei=1;
               i=NCARTAS+i; /* Fim do for */
            }
         }
         if(achei) pontuacao=180+cartas[i-NCARTAS];
         else /* Full house: 160+x (x==trinca) */
         {
            achei=0;
            if((cartas[0]==cartas[1])&&
               (cartas[1]==cartas[2])&& /* Trinca */
               (cartas[3]==cartas[4])) /* Par */
            {
               achei=1;
               i=0;
            }
            else if((cartas[0]==cartas[1])&& /* Par */
                    (cartas[2]==cartas[3])&&
                    (cartas[3]==cartas[4])) /* Trinca */
            {
               achei=1;
               i=4;
            }
            if(achei) pontuacao=160+cartas[i];
            else /* Trinca: 140+x */
            {
               achei=0;
               for(i=0;i<NCARTAS-2;i++)
               {
                  if((cartas[i]==cartas[i+1])&&
                     (cartas[i+1]==cartas[i+2]))
                  {
                     achei=1;
                     i=NCARTAS+i; /* Fim do for */
                  }
               }
               if(achei) pontuacao=140+cartas[i-NCARTAS];
               else /* Dois pares: 20+3x+2y (x>y) */
               {
                  x=y=0;
                  for(i=0;i<NCARTAS-1;i++)
                  {
                     if(cartas[i]==cartas[i+1])
                     {
                        y=x; /* Garante que x seja o maior */
                        x=cartas[i];
                     }
                  }
                  if(x && y) pontuacao=20+3*x+2*y;
                  else /* Um par: x */
                  {
                     achei=0;
                     for(i=0;i<NCARTAS-1;i++)
                     {
                        if(cartas[i]==cartas[i+1])
                        {
                           achei=1;
                           i=NCARTAS+i; /* Fim do for */
                        }
                     }
                     if(achei) pontuacao=cartas[i-NCARTAS];
                  }
               }
            }
         }
      }

      printf("%d\n\n", pontuacao);

      ntestes--; /* Vai para o proximo teste */
   }

   return 0;
}
