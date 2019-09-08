/* Guilherme A. Pinto, OBI-2015, matriz */

#include <stdio.h>

#define MAX 1000

int M[MAX][MAX];
int L[MAX],C[MAX];

int main(){
  int i,j,k,N,max,p;

  scanf("%d", &N);
  for( i = 0; i < N; i++ )
    for( j = 0; j < N; j++ )
      scanf("%d",&M[i][j]);

  for( i = 0; i < N; i++ ){
    L[i] = C[i] = 0;
    for( k = 0; k < N; k++ ){
      L[i] += M[i][k];
      C[i] += M[k][i];
    }
  }
  
  max = -1;
  for( i = 0; i < N; i++ )
    for( j = 0; j < N; j++ ){
      p = L[i]+C[j]-2*M[i][j];
      max = max > p ? max : p;
    }

  printf("%d\n",max);
  
  return 0;
}