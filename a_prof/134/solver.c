#include <stdio.h>
#include <stdbool.h>

void quadrado_magico(int matriz[3][3]){

    int a, b, soma, val = 0;
    bool qM = true;

    for (b = 0; b < 3; b++)
        val = val + matriz[0][b];

    a = 1;
    while (qM && a < 3){
        soma = 0;
        for (b = 0; b < 3; b++)
            soma = soma + matriz[a][b];
        
        a++;
        if(soma == val)
            qM = true;
        else
            qM = false;
    }

    b = 0;

    while (qM && b < 3){
        soma = 0;
        for (a = 0; a < 3; a++)
            soma = soma + matriz[a][b];
    
        b++;
        if(soma == val)
            qM = true;
        else
            qM = false;
    }
    if (qM){
        soma = 0;
        for (a = 0; a < 3; a++)
                soma = soma + matriz[a][a];
        if(soma == val)
            qM = true;
        else
            qM = false;
        
        if (qM){
            soma = 0;
            for (a = 0; a < 3; a++)
                    soma = soma + matriz[a][3-a-1];
            if(soma == val)
                qM = true;
            else
                qM = false;
        }
    }
    if(qM)
        printf("sim\n");
    else
        printf("nao\n");
}

int main(){
    int mat[3][3];

    for(int i = 0; i < 3;i++)
        for(int j =0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    quadrado_magico(mat);
}