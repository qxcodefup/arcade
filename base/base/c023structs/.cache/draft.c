#include <stdio.h>

// Em C, `struct` é uma estrutura de dados composta, que permite agrupar variáveis de diferentes tipos sob um único nome.
// BAsicamente, podemos chamar isso de uma "Supervariável"

// Imagine que você está criando um sistema para gerenciar informações de estudantes, onde cada estudante tem:
// - Nome (uma string de até 50 caracteres)
// - Idade (um inteiro)
// - Nota (um número decimal, float)

// TODO: Defina uma struct chamada `Estudante` que:
// - Tenha os campos: `nome` (string de até 50 caracteres), `idade` (int) e `nota` (float).

// TODO: No `main`, declare uma variável chamada `aluno` do tipo `Estudante` e inicialize os campos:
// - Nome: "Cléber"
// - Idade: 20
// - Nota: 8.5

// TODO: Crie uma função `imprimirEstudante` que:
// - Receba como parâmetro uma variável do tipo `Estudante`.
// - Não retorne nada (`void`).
// - Imprima os valores dos campos no seguinte formato:
//   Nome: Cléber, Idade: 20, Nota: 8.5

// TODO: Chame a função `imprimirEstudante` no `main` para exibir as informações do estudante.

typedef struct {
    //DEL!
    char nome[50];
    int idade;
    float nota;
    //ACT!
    // ??? ???;
    //ADD!
} Estudante;

void imprimirEstudante(Estudante aluno) {

    //DEL!
    printf("Nome: %s, Idade: %d, Nota: %.1f\n", aluno.nome, aluno.idade, aluno.nota);
    //ACT!
    //// Para acessar diferentes campos, temos que especificar, dizendo para qual estrutura estamos apontando e qual o campo da estrutura, se eu quero a nota, eu acesso aluno.nota
    // printf("Nome: %s, Idade: %d, Nota: %.1f\n", ???);
    //ADD!
}

int main() {
    //DEL!
    Estudante aluno = {"Cléber", 20, 8.5};
    imprimirEstudante(aluno);
    //ACT!
    // Estudante aluno = {???};
    // imprimirEstudante(???);
    //ADD!
    return 0;
}
