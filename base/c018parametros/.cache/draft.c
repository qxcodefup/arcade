#include <stdio.h>

// Ainda em funções, elas também podem ter vários parametros, (variaveis que ficam dentro do parenteses) ao mesmo tempo, para executar o que está dentro dela

//TODO: corrija a função abaixo para ela retornar para a área do triangulo (em double)

??? area(??? base, ??? altura) {
    //Declaramos uma variável para armazenar o resultado e calculamos o dobro do número
    //Lembre-se que essas variáveis dessa função específica só existem nela, então você não pode usar o 'base_t' dentroo dessa fnção, somente os parametros declarados acima ou variaveis internas dela (como o resultado)
    double resultado = (base * altura) / 2;
    return resultado; // Retorna o valor calculado
}


int main() {
    double base_t = 3.0;
    double altura_t = 4.0;
    // Para calcular a área, precisamos de duas medidas (largura e altura, por exemplo). 
    //Passamos esses dois valores como parâmetros para a função, que os utiliza para calcular e retornar o valor da área.
    double resultado = area(???, ???);

    //TODO: Corrija o printf para ele printar o resultado retornando pela função

    printf("A área do triangulo é %.1lf metros quadrados", ???);

    return 0;
}
