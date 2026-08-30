#include <stdio.h>

int main () {
    
    int n, A, B, i;
    int ganhador = -1;
    int melhordist = 0;
    int dist;
    
    scanf("%d", &n);
    
    for( i = 0; i < n; i++){
        scanf("%d%d", &A, &B);
        if ( A >= 10 && B >= 10) { 
            dist = A - B;
            dist = dist < 0 ? -dist : dist;
            if((ganhador == -1) || (dist < melhordist)){
                ganhador = i;
                melhordist = dist;
            }
        }
    }	
        
    if( ganhador != -1)
        printf("%d\n", ganhador);
    else
        printf("sem ganhador\n");
    return 0;
}
