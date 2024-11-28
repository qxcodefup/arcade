#include <stdio.h>

int main() {
    // As palavras-chave break e continue são usadas para controlar o fluxo dos loops em C.
    
    // O que é break?
    // A palavra-chave break é usada para interromper completamente a execução de um loop.
    // Quando o break é encontrado, o loop para imediatamente e o código fora do loop é executado.
    
    // O que é continue?
    // A palavra-chave continue faz com que o loop pule a iteração atual e continue com a próxima.
    // Ao encontrar um continue, o loop ignora o código restante na iteração atual e volta para a condição.

    // Exemplo: Uso de break e continue em um loop for.

    // Vamos percorrer os números de 1 a 10, mas:
    // - Usaremos continue para pular o número 3.
    // - Usaremos break para interromper o loop ao atingir o número 6.

    for (int i = 1; i <= 10; i++) {
        if (i == ???) { // erro: conserte a condição
            // TODO: adicione o continue para pular a iteração quando i for 3
        }
        if (i == ???) {  // erro: conserte a condição
            printf("Loop interrompido no número %d\n", i);
            // TODO: adicione o break para interromper o loop quando i for 6.
        }
    }

    return 0;
}
