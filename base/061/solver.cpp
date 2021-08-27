//percorrendo um vetor ao contrário
//invertendo o vetor original
//criando um novo vetor invertido


#include <iostream>
#include <vector>


int main() {
    int size = 0;
    std::cin >> size;
    int vet[size];
    for (int i = 0; i < size; i++)
        std::cin >> vet[i];

    

    std::cout << "[ ";
    for (int i = 0; i < size; i++)
        std::cout << vet[i] << " ";
    std::cout << "]" << std::endl;
}