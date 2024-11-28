#include <stdio.h>

// Em C, `enum` é usado para criar constantes nomeadas, que são inteiros sequenciais a partir de 0.

// Imagine que você está implementando um sistema de controle de semáforo com os seguintes estados:
// - VERMELHO (0)
// - AMARELO (1)
// - VERDE (2)

// TODO: Defina um `enum` chamado `Semaforo` que:
// - Tenha os estados: `VERMELHO`, `AMARELO` e `VERDE`.

// TODO: No `main`, declare uma variável do tipo `Semaforo` chamada `estado` e:
// - Inicialize com o valor `VERMELHO`.
// - Use um `switch` para imprimir a mensagem correspondente:
//   - "Pare!" para `VERMELHO`
//   - "Atenção!" para `AMARELO`
//   - "Siga!" para `VERDE`

typedef enum {
    ???,
} Semaforo;

int main() {
    Semaforo estado = ???;
    switch (estado) {
       case ???:
           printf("???\n");
           break;
    }
    return 0;
}
