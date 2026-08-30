#include <iostream>

int main(){
    int num1 {0};
    int num2 {0};

    std::cin >> num1 >> num2;

    int quociente = num1 / num2;
    int resto = num1 % num2;

    std::cout << quociente << " " << resto << '\n';
}
