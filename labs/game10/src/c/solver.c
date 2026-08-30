#include <stdio.h>
int main(){
    int linhas = 0;
    int disco = 0;
    int aviao = 0;
    scanf("%d %d %d", &linhas, &disco, &aviao);
    int aux1 = 0;
    int aux2 = 0;
    if(disco == aviao){
        printf("0\n");
    }else if(disco > aviao){
        aux1 = disco - aviao;
        printf("%d\n", aux1);
    }else{
        aux1 = linhas - aviao;
        aux2 = disco + aux1;
        printf("%d\n", aux2);
    }
}