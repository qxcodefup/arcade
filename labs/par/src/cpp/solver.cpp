#include <iostream>

int main(){
    int num = {0};

    std::cin >> num;

    if (num % 2 == 0){
        std::cout << "PAR" << '\n';
    } else {
        std::cout << "IMPAR" << '\n';
    }
}
