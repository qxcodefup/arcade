#include <stdio.h>

int main(){
    char nome[100];
    scanf("%99[^\n]", nome);
    
    int i;
    int sum = 0;
    for(i = 0; nome[i]; i++){
        sum += nome[i];
    }

    int RestSum = sum%50;
    int aux = 50 - RestSum;

    if((aux > 46)){
        nome[i] = aux + (50 * 1);
        nome[i+1] = 0;
        puts(nome);
    }else if(aux < 23){
        nome[i] = aux + (50 * 2);
        nome[i+1] = 0;
        puts(nome);
    }else{
        puts("sem sorte");
    }
}