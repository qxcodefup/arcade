#include <stdio.h>

int A, B, C;
int H, L;

int check(int X, int Y) {
  return X <= H && Y <= L;
}

int main() {
  scanf("%d %d %d", &A, &B, &C);
  scanf("%d %d", &H, &L);
  
  int ok = check(A, B) || check(B, C) || check(C, A) ||
           check(B, A) || check(C, B) || check(A, C);
  
  if (ok)
    printf("S\n");
  else
    printf("N\n");
  return 0;
}