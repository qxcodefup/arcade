#include <stdio.h>

/*
Imprime os passos para solução da Torre de Hanoi.
Entrada:
- qte: números de discos que devem ser movidos da torre inicial para a torre final
- ini: torre que é considerada como torre inicial
- aux: torre que é considerada como torre auxiliar
- fim: torre que é considerada como torre final

Pseudocódigo:
   se existe apenas 1 disco para mover
      mova este único disco da torre inicial para a torre final
   senão
      recursivamente mova qte-1 discos da torre inicial para a torre auxiliar
      mova o disco que sobrou da torre inicial para a torre final
      recursivamente mova qte-1 discos da torre auxiliar para a torre final
*/
void hanoi(int qte, char ini, char aux, char fim)
{
   if (qte == 1) 
      printf("%c -> %c\n", ini, fim);
   else {
      hanoi(qte-1, ini, fim, aux);
      printf("%c -> %c\n", ini, fim);
      hanoi(qte-1, aux, ini, fim);
   }
}

int main()
{
   int qte;
   scanf("%d", &qte);
   hanoi(qte, 'A', 'B', 'C');
}
