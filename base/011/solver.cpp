#include <iostream>
#include <iomanip> //setfill e setw

int main(){
    int hora = 0, min = 0, dia = 0, mes = 0, ano = 0;
    std::cin >> hora >> min >> dia >> mes >> ano;
    ano %= 100;

    printf("%02d:%02d %02d/%02d/%02d\n", hora, min, dia, mes, ano);
}

