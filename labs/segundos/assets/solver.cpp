#include <iostream>

int main(){
    int segundos {0};

    std::cin >> segundos;

    int horas = segundos/3600;
    segundos = segundos%3600;
    int minutos = segundos/60;
    segundos = segundos%60; 

    std::cout << horas << ':' << minutos << ':' << segundos << '\n';
}
