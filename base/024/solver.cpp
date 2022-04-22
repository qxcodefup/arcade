#include <iostream>
#include <iomanip>
int main() {
    int a { }, b { };
    std::cin >> a >> b;
    std::cout << std::fixed;
    auto p2 = std::setprecision(2);

    std::cout << (a / b) << "\n";
    std::cout << (a % b) << "\n";
    std::cout << p2 << ((float) a / b) << "\n";
}