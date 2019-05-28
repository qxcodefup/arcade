#include <stdio.h>
#include <string.h>

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int conta_char_rec(char s[], int n, char c){
    if (n == 0) return 0;
    if (s[n-1] == c) return 1 + conta_char_rec(s,n-1,c);
    return 0 + conta_char_rec(s,n-1,c);
}

int main(){
   char s[102], c;
   fgets(s, sizeof(s), stdin);
   scanf("%c", &c);
   int n = strlen(s) - 1;
   printf("%d\n", conta_char_rec(s,n,c));
}