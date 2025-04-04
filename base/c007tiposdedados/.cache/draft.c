//ADD!
#include <stdio.h>

int main() {
    // O que são modificadores de tipos?
    // Os modificadores alteram o comportamento do tipo básico, podendo aumentar o tamanho
    // ou restringir os valores possíveis.
    // Alguns modificadores comuns são:
    // - unsigned: usado para variáveis que armazenam apenas valores não negativos.
    // - long: permite armazenar números maiores do que o padrão de um int ou float.

    // Exemplo prático:

    // TODO: Declare uma variável "idade" do tipo "unsigned int" para armazenar um valor inteiro positivo
    // A variável idade só armazenará valores não negativos (sem sinal).
    //DEL!
    unsigned int idade = 25;
    //ADD!

    // TODO: Declare uma variável "distancia" do tipo "long int"
    // Aqui usamos long para lidar com números maiores do que o int padrão pode armazenar.
    //DEL!
    long int distancia = 2147483648;
    //ADD!

    // TODO: Declare uma variável "precisao" do tipo "double"
    // Usamos double para maior precisão em valores decimais.
    //DEL!
    double precisao = 0.0000025;
    //ADD!

    // Como imprimir esses valores?
    // Para variáveis do tipo unsigned int, usamos o especificador de formato %u.
    // Para variáveis do tipo long int, usamos %ld.
    // Para double, usamos %f, e podemos configurar o número de casas decimais usando, por exemplo, %.7f.
    
    //ACT!
    // printf("Idade: %u\n", ???);       // unsigned int usa %u
    // printf("Distância: %ld\n", ???);  // long int usa %ld
    // printf("Precisão: %.7f\n", ???);  // double usa %f com casas decimais configuráveis
    //DEL!
    printf("Idade: %u\n", idade);
    printf("Distância: %ld\n", distancia);
    printf("Precisão: %.7f\n", precisao);
    //ADD!

    return 0;
}
//ADD!
