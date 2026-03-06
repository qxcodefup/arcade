#include <stdio.h>

// Ainda em funções, elas também podem ter vários parametros, (variaveis que ficam dentro do parenteses) ao mesmo tempo, para executar o que está dentro dela

//TODO: corrija a função abaixo para ela retornar para a área do triangulo (em double)

//DEL!
double area(double base, double altura) {
    // Declaramos uma variável para armazenar o resultado e calculamos a área
    // Lembre-se de que as variáveis declaradas dentro de uma função são locais a ela, ou seja, só existem dentro do escopo dessa função. 
    //Por isso, você não pode usar 'base_t' diretamente aqui; apenas os parâmetros da função e as variáveis declaradas dentro dela estão acessíveis.
    double resultado = (base * altura) / 2;
    return resultado; // Retorna o valor calculado
}
//ACT!
// ??? area(??? base, ??? altura) {
//     //Declaramos uma variável para armazenar o resultado e calculamos o dobro do número
//     //Lembre-se que essas variáveis dessa função específica só existem nela, então você não pode usar o 'base_t' dentroo dessa fnção, somente os parametros declarados acima ou variaveis internas dela (como o resultado)
//     double resultado = (base * altura) / 2;
//     return resultado; // Retorna o valor calculado
// }
//ADD!


int main() {
    double base_t = 3.0;
    double altura_t = 4.0;
    // Para calcular a área, precisamos de duas medidas (largura e altura, por exemplo). 
    //Passamos esses dois valores como parâmetros para a função, que os utiliza para calcular e retornar o valor da área.
    //DEL!
    double resultado = area(base_t, altura_t);
    //ACT!
    //double resultado = area(???, ???);
    //ADD!

    //TODO: Corrija o printf para ele printar o resultado retornando pela função

    //DEL!
    printf("A área do triangulo é %.1lf metros quadrados", resultado);
    //ACT!
    //printf("A área do triangulo é %.1lf metros quadrados", ???);
    //ADD!

    return 0;
}
