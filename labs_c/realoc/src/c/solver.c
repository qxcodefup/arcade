#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int n, i, j, tam;
   scanf("%d", &n);
   char* v[n];
   
   for (i = 0; i < n; i++) {
      scanf("%d ", &tam);
      v[i] = (char*) malloc( (tam+2) * sizeof(char) );
      if (v[i] == 0) return 1;
      fgets(v[i], tam+2, stdin);
   }
   
   for (i = 0; i < n; i++)
      for (j = 0; j < n-1; j++)
         if (strcmp(v[j],v[j+1]) > 0) {
            char *aux = v[j+1];
            v[j+1] = v[j];
            v[j] = aux;
         }
   
   for (i = 0; i < n; i++) {
      printf("%s", v[i]);
      free(v[i]);
   }
   
   return 0;
}