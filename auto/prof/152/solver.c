#include <stdio.h>
#include <string.h>
#include <math.h>

int fatorial(int x){
    if(x == 1)
        return 1;
    return (x * fatorial(x - 1));
}

int main(){
    char cadeia[50];
    scanf("%[^\n]", cadeia);
    int size = strlen(cadeia);
    int totalsub[size];
    int total = 0;

    for(int a = 0; a < size; a++)
        totalsub[a] = 0;

    for(int a = 1; a < size; a++){
        totalsub[a] += fatorial(size) / (fatorial(a) * fatorial(size - a));
        total += totalsub[a];
    }
    char sub[total + 1][size];

    for(int a = 0; a < size; a++){
        for(int x = 0; x < totalsub[a]; x++){
            char caracteres[50];
            caracteres = cadeia;
        }
    }
}