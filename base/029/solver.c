#include <stdio.h>

int main() {

  char q1,q2,q3,q4;
  int pontos = 0;

  scanf("%c", &q1);
  scanf(" %c", &q2);
  scanf(" %c", &q3);
  scanf(" %c", &q4);


  if(q1 == 'd') {
    pontos++;
  }
  if(q2 == 'a') {
    pontos++;
  }
  if(q3 == 'c') {
    pontos++;
  }

  if(q4 == 'd') {
    pontos++;
  }
 
  switch(pontos) {
    case 0: printf("Nunca assistiu\n");
            break;
    
    case 1: printf("Ja ouviu falar\n");
            break;

    case 2: printf("Interessado no assunto\n");
            break;

    case 3: printf("Fa\n");
            break;

    case 4: printf("Super Fa\n");
            break;
  }

  return 0;
}