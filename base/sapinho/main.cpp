#include <iostream>

int main() {
    int prof { }, salto { }, escor { };
    std::cin >> prof >> salto >> escor;
    int pos { 0 };
    while (true) {
        std::cout << pos;
        pos += salto;
        if (pos >= prof) {
            std::cout << " saiu\n";
            break;
        }
        std::cout << " " << pos << "\n";
        pos -= escor;
    }
}