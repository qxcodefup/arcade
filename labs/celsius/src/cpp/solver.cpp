#include <ios>
#include <iostream>
#include <iomanip>

int main(){
    double tCelsius {0};

    std::cin >> tCelsius;

    double tFahrenheit = 1.8 * tCelsius + 32.0;

    std::cout << std::fixed << std::setprecision(6) << tFahrenheit << '\n';
}
