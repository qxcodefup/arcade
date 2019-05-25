#include <iostream>
using namespace std;


//soma c e d, de forma modular, o ref é pra 'a' ou 'A' no char a ser cifrado
char opera_char (char c, char d, bool to_sum){
    char ref = isupper(c) ? 'A' : 'a'; //se eh maiusculo ou minusculo
    int vc = c - ref; //valor de c
    int vd = d - 'a'; //o cifrador eh sempre minusculo
    int soma = (to_sum)?(vc + vd) % 26 : (vc - vd + 26) % 26;
    return ((char )(soma + ref));
}

string cifra_vigenere(string texto, string senha, bool cifrar)
{
    string saida(texto);

    int cont = 0; //controla qual letra da senha será usada
    for(int i = 0; i < (int) texto.size(); i++){
        char c = texto[i];
        if(isupper(c) or islower(c)){
            char d = senha[cont % (int) senha.size()];
            cont++; //da proxima vez pega a proxima letra da senha
            saida[i] = opera_char(c, d, cifrar);
        }
    }
    return saida;
}



int main() {
    string texto;
    string cifra;
    char op;
    getline(cin, texto);
    getline(cin, cifra);
    cin >> op;
    bool operation = (op == '+');
    string saida = cifra_vigenere(texto, cifra, operation);
    cout << saida << endl;

    return 0;
}
