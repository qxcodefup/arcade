#include <stdio.h>

int main(void) {

  int a, b, i, j;

  scanf("%d %d", &a, &b);
  
  i = a;
  j = b;
  
  if(a < b) {
    printf("[ ");
    for(; (i <= j); i++, ++a, --b) {
      printf("%d %d ", a, b);
    }
    printf("]\n");
  }

  return 0;
}
