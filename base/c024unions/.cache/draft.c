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
    ??? ???;
} Dado;

int main() {
    Dado valor;
    valor.??? = ???;
    printf("Inteiro: ???\n", ???);
    return 0;
}
