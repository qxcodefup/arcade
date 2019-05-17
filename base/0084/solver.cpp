#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pegar_posicao(vector<int> vet, int elem){
    for(int i = 0; i < (int) vet.size(); i++)
        if(vet[i] == elem)
            return i;
    return -1;
}

vector<int> pegar_exemplares(vector<int> vet){
    vector<int> sozinhos;
    for(int i = 0; i < (int)vet.size(); i++){
        if(i == pegar_posicao(vet, vet[i]))
            sozinhos.push_back(vet[i]);
    }
    sort(sozinhos.begin(), sozinhos.end());
    return sozinhos;
}

vector<int> carregar_vetor(int num){
    vector<int> vet;
    vet.reserve(num);
    for( int i = 0; i < num; i++){
        int valor;
        cin >> valor;
        vet.push_back(valor);
    }
    return vet;
}

int main ()
{
    int qtd;
    cin >> qtd;
    vector<int> vet = carregar_vetor(qtd);
    vector<int> resp = pegar_exemplares(vet);
    for(int i = 0; i < (int)resp.size(); i++){
        cout << resp[i];
        if(i < (int)resp.size() - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}
