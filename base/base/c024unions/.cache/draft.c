#include <stdio.h>

// Em C, `union` é semelhante a `struct`, mas ocupa o mesmo espaço na memória para todos os seus campos. 
// Isso significa que apenas um campo pode ser usado por vez.

// Imagine que você está representando um dado genérico, que pode ser:
// - Um número inteiro (`int`)
// - Um número decimal (`float`)
// - Uma única letra (`char`)

// TODO: Defina uma `union` chamada `Dado` que:
// - Tenha os campos: `inteiro` (int), `decimal` (float) e `caractere` (char).

// TODO: No `main`, declare uma variável do tipo `Dado` chamada `valor` e:
// - Atribua 10 ao campo `inteiro`.
// - Imprima o valor do campo `inteiro`.
// - Depois, atribua 3.14 ao campo `decimal`.
// - Imprima o valor do campo `decimal`.
// - Finalmente, atribua 'A' ao campo `caractere`.
// - Imprima o valor do campo `caractere`.

typedef union {
    //DEL!
    int inteiro;
    float decimal;
    char caractere;
    //ACT!
    // ??? ???;
    //ADD!
} Dado;

int main() {
    //DEL!
    Dado valor;
    valor.inteiro = 10;
    printf("Inteiro: %d\n", valor.inteiro);
    valor.decimal = 3.14;
    printf("Decimal: %.2f\n", valor.decimal);
    valor.caractere = 'A';
    printf("Caractere: %c\n", valor.caractere);
    //ACT!
    // Dado valor;
    // valor.??? = ???;
    // printf("Inteiro: ???\n", ???);
    //ADD!
    return 0;
}
