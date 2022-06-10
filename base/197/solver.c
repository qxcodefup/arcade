#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int A[n];
    int indice[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
        indice[i] = i;
    } 
        
    for(int i = n-1; i >= 0; i--){
        int trocas = 0;
        for(int j = 0; j < i; j++){
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
                temp = indice[j];
                indice[j] = indice[j+1];
                indice[j+1] = temp;
                
                trocas++;
            }
        }
        if(trocas == 0) break;
    }
    printf("[ ");
    for(int i = 0; i < n; i++)
        printf("%d ", indice[i]);
    printf("]\n");
}
