#include <iostream>

int main(){
    int num1 {0};
    int num2 {0};

    std::cin >> num1 >> num2;

    if (num1 > num2){
        std::cout << num1 << '\n'; 
    } else {
        std::cout << num2 << '\n';
    }
}
