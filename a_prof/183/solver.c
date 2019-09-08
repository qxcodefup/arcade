#include <stdio.h>

int main(){
    char nome[50] = "";
    int idade = 0;
    scanf("%s %d", nome, &idade);
    printf("%s eh ", nome);
    if(idade < 12)
        puts("crianca");
    else if(idade < 18)
        puts("jovem");
    else if(idade < 65)
        puts("adulto");
    else if(idade < 1000)
        puts("idoso");
    else
        puts("mumia");
}








