#include <stdio.h>

int main()
{
    char caracter = 0, p = ' ';
    int tem_letra = 0, tem_ponto = 0;
    
    while (caracter != '\n') {
        scanf("%c", &caracter);
        if ((caracter == ' ') || (caracter == '\n')) {
            if(caracter == '\n'){
                p = '\n';
            }else{
                p = ' ';
            }
            if (tem_letra) {
                printf("str%c",p);
            }
            else {
                if (tem_ponto) {
                printf("float%c",p);
                }
                else {
                    printf("int%c",p);
                }
            }
            tem_ponto = 0;
            tem_letra = 0;
        }
        
        else if (caracter == '.') {
            tem_ponto = 1;
        }
        else if ((caracter != '-') && ((caracter < '0') || (caracter > '9'))) {
            tem_letra = 1;
        }
    }
}
