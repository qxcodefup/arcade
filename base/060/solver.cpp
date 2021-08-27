//ler o vetor
//iniciar a busca com o primeiro elemento
//fazer o laço a partir do segundo elemento
//atualizar o resultado se encontrar um resultado melhor

#include <iostream>

int procurar_maior(int *vetor, int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++)
        if (vetor[i] > maior)
            maior = vetor[i];
    return maior;
}

int procurar_menor(int *vetor, int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++)
        if (vetor[i] < menor)
            menor = vetor[i];
    return menor;
}


int main() {
    int vet[5];
    for(int i = 0; i < 5; i++)
        std::cin >> vet[i];
    int maior = procurar_maior(vet, 5);
    int menor = procurar_menor(vet, 5);

    std::cout << (maior + menor) << std::endl;
}