#include <stdio.h>
#include <string.h>

int main(){
    char nome1[100];
    char nome2[100];
    scanf("%s", nome1);    
    scanf("%s", nome2);
    
    int aux = 0;
    int t1 = strlen(nome1);
    int t2 = strlen(nome2);
    for(int i = 0; i < t1; i++){
        for(int j = 0; j < t2; j++){
            if(nome1[i] == nome2[j]){
                aux++;
                nome2[j] = 0;
                break;
            }
        }
    }
    if(aux == t1){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
}