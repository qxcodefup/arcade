#include <iostream>
#include <string.h>
using namespace std;

string colisaoString(string one, string two) {
    int cont = 0;
    int tam1 = one.size();
    int tam2 = two.size();
    int i1 = tam1 - 1;
    int i2 = 0;
    //contando quantos caracteres sao comuns
    while(one[i1] == two[i2]){
        cont++;
        i1--;
        i2++;
        if(i1 < 0 or i2 >= tam2 )
            break;
    }
    string saida = one.substr(0, i1 + 1) + two.substr(i2, tam2);
    return saida;
}

int main()
{
    string A, B;
    cin >> A >> B;
    cout << colisaoString(A, B) << endl;
}

