#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


string forca_montar_palavra(const string palavra, const string chutes, char hided)
{
    int tam = palavra.length();
    string saida(tam, hided);
    for(int x = 0; x < chutes.size(); x++){
        char c = chutes[x];
        for(int i = 0; i < tam; i++)
            if((c == palavra[i] || ((c - 32) == palavra[i])))
                saida[i] = palavra[i];
    }

    for(int j = 0; j < tam; j++){
        char c = palavra[j];
        if(( c < 'a' || c >'z'))
            if (c < 'A' || c > 'Z')
                saida[j] = c;
    }

    return saida;
}

int main()
{
    string texto;
    string chutes;
    char hided;

    getline(cin, texto);
    getline(cin, chutes);
    cin >> hided;

    cout << forca_montar_palavra(texto, chutes, hided) << endl;
    return 0;
}
