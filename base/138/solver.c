#include <stdio.h>
#include <stdlib.h>
int order(int n){
    int na = 0;
    for(int i=n;i>0;i/=10,na++);
   
    int vet[na];
    for(int i = 0;i<na;n/=10,i++)
        vet[i] = n%10;
    
    for (int i = 0; i < na-1; i++){     
        int min = i;  
        for (int j = i+1; j < na; j++)  
            if (vet[j] < vet[min])  
                min = j;  
        int aux = vet[min];
        vet[min] = vet[i];
        vet[i] = aux;
    }
    
    for(int i =0;i<na;i++)
        n = (n*10) + vet[i];
    
    return n;
}


int main(){

   int a,b;
   scanf("%d%d",&a,&b);

   printf("%s\n",(order(a)==order(b))?"True":"False");

   

}