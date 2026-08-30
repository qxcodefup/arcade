#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_vowel(char c){
    const char * vowels = "aeiou";
    for(int i = 0; i < 5; i++)
        if(vowels[i] == c)
            return true;
    return false;
}

void print_best(const char * text){
    int length = strlen(text);
    int counter[length];
    int ind_best = 0;
    for(int i = 0; i < length; i++){
        int cont = 0;
        for(int j = i; j < length; j++){
            if(is_vowel(text[j]))
                cont++;
            else
                break;
        }
        counter[i] = cont;
        if(counter[i] > counter[ind_best])
            ind_best = i;
    }
    for(int i = ind_best, j = 0; j < counter[ind_best]; j++, i++)
        printf("%c", text[i]);
    puts("");
}

int main(){
    int casos;
    scanf("%d", &casos);

    for(int a = 0; a < casos; a++){
        char text[50];
        scanf("%s", text);
        print_best(text);
    }
}
