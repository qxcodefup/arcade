#include <stdio.h>
#include <string.h>
int main(){
    int size1 = 0;
    int size2 = 0;
    int poderIrom = 0;
    int poderCaptain = 0;
    char poderoso[100];
    int auxpoderoso = 0;
    char aux[100];
    int poderaux = 0;
    scanf("%d", &size1);
    int oudPoder = 0;
    for(int i = 0; i < size1; i++){
        scanf(" %[^\n]", aux);
        scanf("%d", &poderaux);
        poderIrom += poderaux;
        
        if(poderaux > oudPoder){
            oudPoder = poderaux;
            int size = strlen(aux);
            auxpoderoso = size;
            for(int i = 0; i < size; i++){
                poderoso[i] = aux[i];
            }
        }
    }
    scanf("%d", &size2);
    for(int i = 0; i < size2; i++){
        scanf(" %[^\n]", aux);
        scanf("%d", &poderaux);
        poderCaptain += poderaux;
        if(poderaux > oudPoder){
            oudPoder = poderaux;
            int size = strlen(aux);
            auxpoderoso = size;
            for(int i = 0; i < size; i++){
                poderoso[i] = aux[i];
            }
        }
    }
    if(poderIrom > poderCaptain){
        puts("Team Iron Wins");
    }else if(poderIrom < poderCaptain){
        puts("Team Captain Wins");
    }else{
        puts("Draw");
    }
    for(int i = 0; i < auxpoderoso; i++){
            printf("%c", poderoso[i]);
    }
    printf("\n");
}