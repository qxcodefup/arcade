/*
 * Solução para o problema Botas
 * Wanderley Guimarães
 */
#include <stdio.h>

int
min (int a, int b){
    if (a < b)
        return a;
    return b;
}

#define MAX_NUM_PE 61
int N, pe_esquerdo[MAX_NUM_PE], pe_direito[MAX_NUM_PE];

int
main (){
    int  numero, i;
    char lado;
    
    scanf ("%d", &N);
    
    for (i = 0; i < MAX_NUM_PE; i++)
        pe_esquerdo[i] = pe_direito[i] = 0;
    for (i = 0; i < N; i++){
        scanf ("%d %c ", &numero, &lado);
        if (lado == 'E')
            pe_esquerdo[numero]++;
        else
            pe_direito[numero]++;
    }
    int ret = 0;
    for (i = 0; i < MAX_NUM_PE; i++)
        ret += min (pe_esquerdo[i], pe_direito[i]);
    printf ("%d\n", ret);
    
    return 0;
}