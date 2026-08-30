#include <iostream>

int main() {
    bool wifi { }, login { }, admin { };
    std::cin >> wifi >> login >> admin;

    if (!wifi) {
        std::cout << "you must connect to wifi\n";
        return 0;
    }
    if (!login) {
        std::cout << "you need to login first\n";
        return 0;
    }
    if (!admin) {
        std::cout << "you need to login as admin\n";
        return 0;
    }
    std::cout << "done\n";
}