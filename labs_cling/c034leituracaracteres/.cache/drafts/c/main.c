#include <stdio.h>

// Para manipular arquivos caracter a caracter, usamos:
// - `fgetc`: lê um único caractere do arquivo e o retorna como inteiro.
// - `fputc`: escreve um único caractere no arquivo.

// Estes métodos são úteis para processar arquivos de texto em nível mais granular.

// TODO: Abra um arquivo chamado "caracteres.txt" no modo de escrita ("w").
// - Escreva os caracteres: 'A', 'B', 'C', 'D', 'E' usando `fputc`.
// - Feche o arquivo.

// TODO: Reabra o arquivo no modo de leitura ("r").
// - Leia cada caractere usando `fgetc` até o final do arquivo.
// - Imprima os caracteres na tela.

int main() {
    FILE* arquivo;

    // Passo 1: Abrir o arquivo no modo de escrita e escrever caracteres
    FILE* arquivo = fopen("caracteres.txt", ???);
    ???; // Escrever caracteres
    fclose(???);
    ???; // Ler caracteres
    fclose(???);
    return 0;
}
