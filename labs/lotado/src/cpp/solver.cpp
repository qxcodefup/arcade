#include <iostream>

int main() {
    int capacity = 0;
    int onibus = 0;
    std::cin >> capacity;
    while (true) {
        int entram = 0;
        std::cin >> entram;
        onibus += entram;
        if (onibus == 0) {
            std::cout << "vazio\n";
        } else if (onibus < capacity) {
            std::cout << "ainda cabe\n";
        } else if (onibus < 2 * capacity) {
            std::cout << "lotado";
        } else {
            std::cout << "hora de partir\n";
            break;
        }
    }
}
