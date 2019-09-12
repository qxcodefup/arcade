#include <iostream>
using namespace std;

int vetor_para_int(int v[], int tam){
    int i, num = v[0];
    for(i = 1; i < tam; i++) {
        num *= 10;
        num += v[i];
    }
    cout << num << endl;
    return num;
}

int main(){
    int qtd;
    cin >> qtd;
    int v[qtd];

    for(int i =0; i < qtd ; i++){
        cin >> v[i];
    }
    
    vetor_para_int(v,qtd);

    return 0;
}

