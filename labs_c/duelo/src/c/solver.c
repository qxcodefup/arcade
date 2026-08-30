#include <stdio.h>

typedef struct {
   int vida;
   int ataque;
} personagem;

void duelo(personagem p1, personagem p2){
   while ((p1.vida > 0) && (p2.vida > 0)) {
      p1.vida -= p2.ataque;
      p2.vida -= p1.ataque;
   }
   if ((p1.vida <= 0) && (p2.vida <= 0))
      printf("Empate\n");
   else if (p2.vida <= 0)
      printf("Personagem 1\n");
   else
      printf("Personagem 2\n");
}

int main(){
   personagem p1, p2;
   scanf("%d\n%d", &p1.vida, &p1.ataque);
   scanf("%d\n%d", &p2.vida, &p2.ataque);
   duelo(p1,p2);
}
