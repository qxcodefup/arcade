#include <iostream>

int main(){

    int num { };
    std::cin >> num;
    bool eh_primo = true; //retorno padrao
    for (int a = 2; a < n; a++) {
        if (n % a == 0) {
            eh_primo = false;
            break;
        }
    }

    std::cout << (eh_primo ? 1 : 0) << '\n';
    return 0;
}