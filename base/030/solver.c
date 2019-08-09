#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int preco, palpite1, palpite2;

  scanf("%d", &preco);
  scanf("%d", &palpite1);
  scanf("%d", &palpite2);

  if(abs((palpite1 - preco)) < abs((palpite2 - preco))) {
    printf("primeiro\n");
  } else if(abs((palpite1 - preco)) > abs((palpite2 - preco))) {
    printf("segundo\n");
  } else {
    printf("empate\n");
  }
  return 0;
}