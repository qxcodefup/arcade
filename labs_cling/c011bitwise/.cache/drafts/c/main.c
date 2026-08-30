#include <stdio.h>

int main() {
    // O que é manipulação de bits (bitwise)?
    // Manipulação de bits envolve alterar diretamente os bits individuais que compõem um número. (lembre-se que, por uma questão de eficiência, computadores processam TUDO em binário (0 e 1))
    // Então, é como se manipulássemos a raiz do que o computador irá compreender do código.
    // Em C, também podemos usar operações bitwise para realizar tarefas como troca de valores e otimização de cálculos.
    
    // Lembre-se: 1 byte = 8 bits.
    
    // Principais operadores bitwise:
    // << : Desloca os bits à esquerda (multiplica por potências de 2)
    // >> : Desloca os bits à direita (divide por potências de 2)
    // &  : AND bit a bit (compara dois bits e retorna 1 se ambos forem 1)
    // |  : OR bit a bit (compara dois bits e retorna 1 se qualquer um dos dois for 1)
    // ^  : XOR bit a bit (compara dois bits e retorna 1 se forem diferentes)
    
    // Vamos praticar alguns exemplos de manipulação de bits:

    // SHIFT RIGHT (Deslocamento à direita):
    // TODO: Printe o resultado do deslocamento à direita de 16 por 2 posições
    // Dica: 16 em binário é 10000, e deslocar à direita divide o número por 2^n.
    printf("%d\n", 16 ??? 2);

    // SHIFT LEFT (Deslocamento à esquerda):
    // TODO: Printe o resultado do deslocamento à esquerda de 5 por 3 posições
    // Dica: Deslocar à esquerda multiplica o número por 2^n.
    printf("%d\n", 5 ??? 3);

    // AND BITWISE:
    // TODO: Printe o resultado de 12 AND 5 
    // Dica: 12 = 1100, 5 = 0101, e o AND retorna 1 se ambos os bits forem 1.
    printf("%d\n", 12 ??? 5);

    // OR BITWISE:
    // TODO: Printe o resultado de 8 OR 3 
    // Dica: 8 = 1000, 3 = 0011, e o OR retorna 1 se qualquer um dos bits for 1.
    printf("%d\n", 8 ??? 3);

    // XOR BITWISE:
    // TODO: Printe o resultado de 7 XOR 2 
    // Dica: XOR retorna 1 se os bits forem diferentes.
    printf("%d\n", 7 ??? 2);

    return 0;
}
