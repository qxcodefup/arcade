#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    char shots[26];
    char mark[2];

    scanf("%[^\n]", text);
    getchar();
    scanf("%s", shots);
    getchar();
    scanf("%1[^\n]", mark);
    getchar();

    for(int i = 0; text[i]; i++){
        if((text[i] > 65 && text[i] < 90) || (text[i] > 97 && text[i] < 122)){
            int print_mark = 1;
            for(int j = 0; shots[j]; j++){
                if(shots[j] == text[i] || shots[j]-32 == text[i]){
                    printf("%c", text[i]);
                    print_mark = 0;
                    break;
                }
            }
            if(print_mark){
                printf("%c", mark[0]);
            }
        }else{
            printf("%c", text[i]);
        }
    }
    printf("\n");
}