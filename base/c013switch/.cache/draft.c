#include <stdio.h>

int main() {
    // O que é a estrutura switch-case?
    // A estrutura switch-case é uma alternativa ao if-else quando
    // queremos comparar o valor de uma variável com várias possibilidades.
    // Em vez de utilizar vários if-else seguidos, podemos usar o switch
    // para tornar o código mais legível.

    // Como funciona?
    // O switch avalia o valor de uma variável e executa o código correspondente
    // ao "case" correspondente. Se nenhum case for satisfeito, o bloco "default" será executado.

    // Exemplo: Avaliar o dia da semana com base em um número.
    int dia = 2;

    switch (dia) {
        // Cada "case" representa uma condição para ser verificada.
        // O "break" é necessário para encerrar o bloco de cada case.
        
        // TODO: Adicione break's à estrutura do switch-case e corrija a sintaxe.
        case 1:
            printf("Hoje é segunda-feira.\n");
            break;
        case 6:
            printf("Hoje é sábado.\n");
        case 7
            printf("Hoje é domingo.\n");
        ???:
            printf("Dia inválido.\n");

    } //DEL!
    // Faltando o fechamento do switch

    return 0;
}