#include <iostream>
using namespace std;

int n_substring(string menor, string maior)
{
    int pos = 0;
    int cont = 0;
    pos = maior.find(menor);
    while(pos != (int)string::npos){
        cont++;
        pos = maior.find(menor, pos + 1);
    }
    return cont;
}

int main(){
    string stra, strb;
    getline(cin, stra);
    getline(cin, strb);
    cout << n_substring(strb, stra) << endl;
    return 0;
}