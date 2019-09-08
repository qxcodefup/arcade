#include <stdio.h>
#include <stdbool.h>

bool verifica_next(int i, int sizeFig, int vet[sizeFig]){
    for(int a = i; a < sizeFig; a++)
        if(vet[a] != -1)
            return true;
    return false;
}

int main(){
    int size = 0;
    int nFigurinhas = 0;
    scanf("%d %d", &size, &nFigurinhas);

    int album[size];
    int figurinhas[nFigurinhas];

    for(int i = 1; i <= size; i++)
        album[i - 1] = i;

    for(int i = 0; i < nFigurinhas; i++)
        scanf("%d", &figurinhas[i]);

    int tem = 0;
    for(int i = 0; i < nFigurinhas; i++)
        for(int x = 0; x < size; x++)
            if(figurinhas[i] == album[x]){
                tem += 1;
                album[x] = -1;
                figurinhas[i] = -1;
            }

    bool naoTem = true;
    for(int i = 0; i < nFigurinhas; i++)
        if(figurinhas[i] != -1){
            printf("%d", figurinhas[i]);
            naoTem = false;
            if(verifica_next(i + 1, nFigurinhas, figurinhas))
                printf(" ");
        }
    
    if(naoTem)
        printf("N");

    puts("");
    bool naoFalta = true;
    for(int i = 0; i < size; i++){
        if(album[i] != -1){
            printf("%d", album[i]);
            naoFalta = false;
            if(verifica_next(i + 1, size, album))
                printf(" ");
        }
    }
    if(naoFalta){
        printf("N");
    }

    puts("");
}