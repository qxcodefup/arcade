#include <stdio.h>
#include <stdbool.h>

bool squart(int n){
    for(int i = 1, a=1; i<=n; i+=2, a+=i)
        if(a==n)
            return true;
    return false;
}

int collatz(int n){
    int cont = 1;
    while(n>1){
        n = (n%2)?n*3+1:n/2;
        cont++;
    }
    return cont;
}

int main(){
    int n,nmax=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(squart(x))
            if(collatz(x)>collatz(nmax))
                nmax = x; 
    }
    if(nmax)
        printf("%d\n",nmax);
    else
        printf("a porta nao existe\n");
    return 0;
}
