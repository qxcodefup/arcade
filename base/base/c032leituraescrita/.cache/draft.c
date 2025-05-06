#include <stdio.h>
#include <stdlib.h>

// A leitura e escrita de arquivos binários em C é feita usando:
// - `fopen` para abrir o arquivo (modo "wb" para escrita binária e "rb" para leitura binária).
// - `fwrite` para escrever dados binários no arquivo.
// - `fread` para ler dados binários do arquivo.
// - `fclose` para fechar o arquivo ao final.

// TODO: Abra um arquivo chamado "dados.bin" no modo de escrita binária.
// - Escreva os inteiros 10, 20, 30 no arquivo usando `fwrite`.

// TODO: Reabra o arquivo no modo de leitura binária.
// - Leia os números e os imprima na tela.

int main() {
    FILE* arquivo;
    // Passo 1: Abrir arquivo para escrita binária
    //DEL!
    arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    int numeros[3] = {10, 20, 30};
    fwrite(numeros, sizeof(int), 3, arquivo);
    fclose(arquivo);

    // Passo 2: Reabrir arquivo para leitura binária
    arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    int leitura[3];
    fread(leitura, sizeof(int), 3, arquivo);
    fclose(arquivo);

    // Passo 3: Imprimir os valores lidos
    printf("Valores lidos: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", leitura[i]);
    }
    printf("\n");
    //ACT!
    // FILE* arquivo = fopen("dados.bin", ???);
    // ???; // Escrever dados
    // fclose(???);
    //ADD!
    return 0;
}
