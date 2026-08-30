#include <iostream>
#include <iomanip>

int main(){
    int qtd_prod1 {0};
    int qtd_prod2 {0};
    int qtd_prod3 {0};
    double val_prod1 {0};
    double val_prod2 {0};
    double val_prod3 {0};
    double val_dinheiro {0};

    std::cin >> qtd_prod1 >> qtd_prod2 >> qtd_prod3;
    std::cin >> val_prod1 >> val_prod2 >> val_prod3; 
    std::cin >> val_dinheiro; 

    val_dinheiro -= (qtd_prod1*val_prod1) + (qtd_prod2*val_prod2) + (qtd_prod3*val_prod3); 

    std::cout << std::fixed << std::setprecision(2) << val_dinheiro << '\n';
}
