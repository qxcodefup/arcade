//ADD!
#include <stdio.h>

int main() {
    // O que são variáveis?
    // Em C, uma variável é um espaço na memória onde você pode armazenar um valor.
    // Variáveis possuem nomes para facilitar o acesso aos valores.
    // Esses valores podem mudar durante a execução do programa.

    // O que são tipos?
    // Em C, os tipos de dados determinam o tipo de valor que uma variável pode armazenar.
    // Existem vários tipos de dados, e cada um serve para armazenar diferentes formas de informação.
    // Por exemplo:
    // - int: usado para armazenar números inteiros (ex: 10, 20, -5).
    // - float: usado para armazenar números decimais de precisão simples (ex: 1.75, 3.14).
    // - char: usado para armazenar um único caractere (ex: 'A', 'b').

    // Como declarar variáveis?
    // Para declarar uma variável, você precisa especificar seu tipo e dar um nome a ela.
    // Aqui está um modelo genérico de como declarar variáveis:
    // tipo nome_da_variavel = valor_inicial;

    // Exemplo:
    // int idade = 30; // Declaramos uma variável do tipo int com o nome "idade" e valor 30.

    // Como imprimir variáveis?
    // Para imprimir variáveis na tela, usamos a função printf.
    // O printf permite que você insira variáveis em uma string formatada,
    // onde você usa especificadores de formato para indicar o tipo da variável.
    // Especificadores comuns:
    // - %d: para imprimir variáveis do tipo int (inteiro).
    // - %f: para imprimir variáveis do tipo float (decimal).
    // - %c: para imprimir variáveis do tipo char (caractere).
    // Exemplo de uso:
    // printf("Idade: %d\n", idade); // Substitua %d pelo especificador correto.

    // Agora é sua vez!

    // TODO: Declare uma variável int chamada "idade" e atribua a ela o valor 20.
    // TODO: Declare uma variável float chamada "altura" e atribua a ela o valor 1.75.
    // TODO: Declare uma variável char chamada "letra" e atribua a ela o caractere 'A'.
    //DEL!
    int idade = 20;
    float altura = 1.75;
    char letra = 'A';
    //ADD!

    // Imprima as variáveis na tela utilizando printf e os especificadores corretos.
    //ACT!
    // printf("Idade  : ???\n", ???);  // TODO: Substitua ??? pelo especificador e variável correta
    // printf("Altura : ???\n", ???);  // TODO: Substitua ??? pelo especificador e variável correta
    // printf("Letra  : ???\n", ???);  // TODO: Substitua ??? pelo especificador e variável correta
    //DEL!
    printf("Idade  : %d\n", idade);
    printf("Altura : %f\n", altura);
    printf("Letra  : %c\n", letra);
    //ADD!

    return 0;
}
