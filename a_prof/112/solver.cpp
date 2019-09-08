#include <iostream>
#include <string.h>
using namespace std;

int contar(string str, char letra){
    int cont = 0;
    for(int i = 0; i < (int) str.size(); i++){
        char c = str[i];
        if(c == letra)
            cont++;
    }
    return cont;
}

bool eh_anagrama(string A, string B) {
    if(A.length() != B.length())
        return false;
    for(int i = 0; i < A.size(); i++){
        char c = A[i];
        if(contar(A, c) != contar(B, c))
            return false;
    }
    return true;
}

int main()
{
    string A, B;
    cin >> A >> B;
    if(eh_anagrama(A, B))
        cout << "sim" << endl;
    else {
        cout << "nao" << endl;
    }
}