#include <iostream>
using namespace std;

string cifra_poli_generica(string texto, string word1, string word2){
    string saida(texto);
    for(int i = 0; i < (int) texto.size(); i++){
        for(int k = 0; k < (int) word1.size(); k++){
            if(texto[i] == word1[k]) {
                saida[i] = word2[k];
                break;
            }
            if(texto[i] == word2[k]) {
                saida[i] = word1[k];
                break;
            }
        }
    }
    return saida;
}


int main(){
    string palavra;
    string word1;
    string word2;
    getline(cin, palavra);
    getline(cin, word1);
    getline(cin, word2);
    cout << cifra_poli_generica(palavra, word1, word2) << endl;
    return 0;
}
