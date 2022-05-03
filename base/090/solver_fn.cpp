#include <iostream>

bool eh_primo(int n) {
    for (int a = 2; a < n; a++)
        if (n % a == 0)
            return false;
    return true;
}

int main(){

    int num { };
    std::cin >> num;
    std::cout << (eh_primo(num) ? 1 : 0) << '\n';
    return 0;
}