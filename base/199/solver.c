#include <stdio.h>
#include <string.h>

typedef struct { 
    char nome[21];
    int pontos;
} Pizzaria;


int main(){
    int n;
    scanf("%d", &n);
    
    Pizzaria pizzaria[n];
    
    for(int i = 0; i < n; i++){
        scanf("%s %d", pizzaria[i].nome, &pizzaria[i].pontos);
    }
    
    int melhor_pizzaria = 0;
    
    for(int i = 0; i < n; i++){
        if(pizzaria[i].pontos > pizzaria[melhor_pizzaria].pontos){
            melhor_pizzaria = i;
        }else if( pizzaria[i].pontos == pizzaria[melhor_pizzaria].pontos){
            if( strcmp(pizzaria[i].nome, pizzaria[melhor_pizzaria].nome) < 0){
                melhor_pizzaria = i;
            }
        }
    }
    
    printf("%s\n", pizzaria[melhor_pizzaria].nome );
    
    
    
    
    
    
}
    
