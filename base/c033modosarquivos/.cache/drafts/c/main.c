#include <stdio.h>

// Em C, os arquivos podem ser abertos em diferentes modos:
// - "r": leitura (arquivo deve existir).
// - "w": escrita (cria um novo arquivo ou sobrescreve se já existir).
// - "a": escrita no final do arquivo (não sobrescreve o conteúdo existente).
// - "rb", "wb", "ab": mesmos modos, mas para arquivos binários.

// Para abrir um arquivo, usamos a função `fopen`:
// - Retorna um ponteiro do tipo `FILE*` se for bem-sucedido ou NULL em caso de erro.

// IMPORTANTE:
// Sempre use `fclose` para liberar os recursos associados ao arquivo.

// TODO: Abra um arquivo chamado "texto.txt" no modo de escrita ("w").
// - Escreva a frase: "Este é um teste de escrita." no arquivo.
// - Feche o arquivo.

// TODO: Reabra o arquivo no modo de leitura ("r").
// - Leia o conteúdo do arquivo e imprima na tela.

int main() {
    FILE* arquivo;

    // Passo 1: Abrir o arquivo no modo de escrita e escrever no arquivo
    //DEL!
    arquivo = fopen("texto.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(arquivo, "Este é um teste de escrita.\n");
    fclose(arquivo);

    // Passo 2: Reabrir o arquivo no modo de leitura e imprimir o conteúdo
    arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
    //ACT!
    // FILE* arquivo = fopen("texto.txt", ???);
    // ???; // Escrever no arquivo
    // fclose(???);
    // ???; // Abrir para leitura
    // ???; // Ler e imprimir conteúdo
    // fclose(???);
    //ADD!
    return 0;
}
