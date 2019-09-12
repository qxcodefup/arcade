#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);

  if (n > 0) {
    printf("positivo\n");
  } else if (n < 0) {
    printf("negativo\n");
  } else {
    printf("nulo\n");
  }

  return 0;
}