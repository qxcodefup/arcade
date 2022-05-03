#include <iostream>
#include <vector>

//acha o proximo elemento vivo a partir de inicio + 1
int achar_vivo(std::vector<int> vet, int pos) {
    do {
        pos = (pos + 1) % vet.size(); //proxima posicao na lista circular
    } while (vet[pos] == 0);  //valor 0 eh quem está morto
    return pos;
}

int main(){
    int size { };
    int chosen { }; //o escolhido
    std::cin >> size >> chosen;
    chosen = chosen - 1; //ajusta a posicao

    std::vector<int> vet(size);     //inicia o vetor
    for (int i = 0; i < size; i++)  //percorre
        vet[i] = i + 1;             //preenche

    for (int i = 0; i < size - 1; i++) {          //matar size - 1 elementos
        int vai_morrer = achar_vivo(vet, chosen); //acho o proximo vivo depois do escolhido
        vet[vai_morrer] = 0;                      //mata ele
        chosen = achar_vivo(vet, vai_morrer);     //acha o proximo vivo depois do cara que morreu
    }
    std::cout << vet[chosen] << '\n';             //imprime quem sobrou
}