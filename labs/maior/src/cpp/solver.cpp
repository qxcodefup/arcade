#include <iostream>
using namespace std;

int main(){
    
    float primeiro { }, valor { };
    char segundo { };
    cin >> primeiro >> segundo >> valor;

    if(((primeiro > valor) && (segundo == 'm')) || ((primeiro < valor) && (segundo == 'M'))){
        cout << "segundo\n";
    }else{
        cout << "primeiro\n";
    }
    return 0;
}