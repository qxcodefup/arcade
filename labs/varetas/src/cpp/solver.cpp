#include <iostream>
int main() {
    int a { }, b { }, c { };
    std::cin >> a >> b >> c;
    if (a >= b + c || b >= a + c || c >= a + b)
        std::cout << "False\n";
    else
        std::cout << "True\n";
}

