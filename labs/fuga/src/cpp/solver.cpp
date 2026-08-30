#include <iostream>

int main() {
    int hel { }, pol { }, fug { }, dir { };
    std::cin >> hel >> pol >> fug >> dir;
    while (!(fug == hel || fug == pol)) {
        fug = fug + dir;
        fug = (fug + 16) % 16;
    }
    std::cout << (fug == hel ? "S\n" : "N\n");
}