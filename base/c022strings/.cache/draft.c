#include <stdio.h>
#include <string.h>

// Em C, strings são arrays de caracteres que terminam com o caractere nulo '\0'.
// A biblioteca <string.h> oferece várias funções úteis para manipulação de strings.

// TODO: Vamos praticar uma função por vez, explorando as funcionalidades de cada uma.

int main() {
    // 1. Cópia de Strings com `strcpy`
    // O `strcpy` permite copiar o conteúdo de uma string de origem para uma string de destino.
    // TODO: Copie a string de `origem` para `destino` e exiba o resultado.
    char origem[] = "Clings é Tech";
    char destino[20];
    strcpy(???, ???); // As duas strings serão iguais, essa função existe pois não podemos fazer a atribuição "direta = origem"; 
    printf("Destino após strcpy: %s\n", ????);



    // 2. Comparação de Strings com `strcmp`
    // O `strcmp` compara duas strings caractere por caractere.
    // E retorna:
    // - Um valor negativo se a primeira string é "menor" (vem antes na ordem lexicográfica),
    // - Zero se as strings são iguais,
    // - Um valor positivo se a primeira string é "maior" (vem depois).
    // TODO: Compare `str1` e `str2` e exiba o resultado.
    char str1[] = "Clings é Pop";
    char str2[] = "Clings é Tudo";
    int resultado = strcmp(???, ???);
    if (??? == ???) {
        printf("As strings são iguais.\n");
    } else if (??? < ???) {
        printf("str1 é menor que str2. e str1 é diferente str2.\n");
    } else {
        printf("str1 é maior que str2 e str1 é diferente str2.\n");
    }
    


    // 3. Contar o Tamanho de uma String com `strlen`
    // A função `strlen` retorna o número de caracteres em uma string, excluindo o caractere nulo '\0'.
    // OBS: Só funciona com vetores de char!
    // TODO: Conte e exiba o número de caracteres em `texto`.
    char texto[] = "Clings é meu melhor amigo de estudo";
    int comprimento = strlen(???);
    printf("O tamanho da string é: %d\n", ???);



    // 4. Divisão de String em Palavras com `strtok`
    // O `strtok` quebra uma string em substrings (tokens) usando um delimitador.
    // Cada chamada a `strtok` retorna o próximo token.
    // TODO: Divida a string `texto` em palavras, usando espaço (" ") como delimitador, e exiba cada palavra separadamente.
    char txt[] = "C é uma linguagem poderosa para manipulação de strings";
    char *token = strtok(???, ???);
    printf("Palavras na string:\n");
    while (??? != NULL) {
        printf("%s\n", token);
        token = strtok(???, ???);
    }

    return 0;
}