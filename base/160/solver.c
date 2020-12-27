#include <stdio.h>

int sfib(int n){                                          
    int add= 0,acc = 2;
    int i, fib1 = 1, fib2 = 1, soma;         
    for (i = 3; fib1 + fib2 <= n; i++,add++){                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;
        if(add==3){
            add = 0;
            acc+=fib2;
        }

    }                                        
    return acc;                             
}  
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sfib(n));



    return 0;
}