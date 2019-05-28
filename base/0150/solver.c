#include <stdio.h>

int main(){
   int linhas, colunas, i, j;
   scanf("%d", &linhas);
   scanf("%d", &colunas);
   int m1[linhas][colunas], m2[linhas][colunas];
   for (i = 0; i < linhas; i++)
      for (j = 0; j < colunas; j++)
         scanf("%d", &m1[i][j]);
   for (i = 0; i < linhas; i++)
      for (j = 0; j < colunas; j++)
         scanf("%d", &m2[i][j]);
   
   int soma[linhas][colunas];
   for (i = 0; i < linhas; i++)
      for (j = 0; j < colunas; j++)
         soma[i][j] = m1[i][j] + m2[i][j];
   
   for (i = 0; i < linhas; i++) {
      for (j = 0; j < colunas; j++){
         printf("%d", soma[i][j]);
         if(j < colunas - 1)
            printf(" ");
      }
      printf("\n");
   }
}
