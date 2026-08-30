#include <stdio.h>
#include <string.h>

typedef struct engima{
    char data[100];
    char key[10];
}Engima;

void decifrar(Engima* a){
    int l = strlen(a->key);
    for(int i=0;a->data[i]!='\0';i++)
        a->data[i] = (a->data[i])^(a->key[i%l]-'0'); 
}

int main(){
    Engima a;
    scanf("%[^\n]",a.data);
    scanf("\n%[^\n]",a.key);
    decifrar(&a);

    printf("%s\n",a.data);
 
}