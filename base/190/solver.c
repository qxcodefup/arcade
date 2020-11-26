#include <stdio.h>
#include <math.h>

int reverse(int n){
    int aux = 0;
    while(n > 0){
        aux = aux * 10 + n % 10;
        n /= 10;
    }
    return aux;
}

int ispalind(int n){
    return n == reverse(n);
}

int pot(int a, int b){
    int prod = 1;
    for(int i = 0; i < b; i++)
        prod *= a;
    return prod;
}

//invertido
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selection_sort(int arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
            if (arr[j] > arr[min_idx])  
                min_idx = j;  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  


int main(){

    int ndig, qtd;
    scanf("%d %d", &ndig, &qtd);
    int init = pot(10, ndig - 1);
    int final = pot(10, ndig);
    int vet[100000];
    int vet_size = 0;
    for(int i = init; i < final; i++) //percorrendo todos sem repetição
        for(int j = i; j < final; j++) //j < i
            if(ispalind(i * j))
                vet[vet_size++] = i * j;
    selection_sort(vet, vet_size); //invertido
    for(int i = 0; i < qtd; i++)
        printf("%d\n", vet[i]);
    return 0;
}