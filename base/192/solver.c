#include <stdio.h>

int main(){

  int M = 0, A = 0, B = 0; // idade de d. Monica e dois de seus filhos
  scanf("%d %d %d", &M, &A, &B);
  
  int C = M - A - B;
  int res = A > B ? A : B;
  res = C > res ? C : res;

  printf("%d\n", res);
  
  return 0;
}
