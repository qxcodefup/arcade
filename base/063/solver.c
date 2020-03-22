#include <stdio.h>
int main(){
    int ncartas = 0;
    scanf("%d", &ncartas);
    int total = 0;
    int as = 0;
    int carta = 0;
    for(int i = 0;i < ncartas;i++){
        scanf("%d", &carta);
        if(carta > 9){
            carta = 10;
        }
        if(carta == 1){
            carta = 11;
            as++;
        }
        total += carta;
    }
    while (total > 21 && as > 0){
        total -= 10;
        as--;
    }
    printf("%d\n", total);
}