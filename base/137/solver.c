#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 2; i <= n; i++){
        int c = 0;
        for(; n % i == 0; c++ , n /= i);
        if(c)
            printf("%d %d\n", i, c);
    }
}