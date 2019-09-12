#include <stdio.h>

// versão recursiva
int fib(int n){
    if (n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}

/* versão iterativa
int fib(int n)
{
    int f = 1, fib1 = 1, fib2 = 1, i;
    for (i = 3; i <= n; i++) {
        f = fib1 + fib2;
        fib2 = fib1;
        fib1 = f;
    }
    return f;
}
*/

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    
    //int x;
    //int y = x;
    //while (x > 0) break;

    //if (n = 1) n = 2;
    //int x=1, y=1, z=1;
    //if (x < y < z) n = 0;
    //if (n > 0)
    //   if (n < 10)
    //      n = 1;
    //else
    //   n = 2;
    //n = 0 && 1 || 1;

    //int v[3];
    //v[4] = 5;
    //for (int i = 0; i <= 3; i++) v[i] = 0;
}