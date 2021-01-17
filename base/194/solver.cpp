// Guilherme A. Pinto, nota, OBI-2019

#include <bits/stdc++.h>
using namespace std;

// Calculando explicitamente a area de Felix (um triangulo mais um retangulo)
// e comparando com a metade da area original da nota: 5600 = (160/2)*70

int main(){
  int B,T;
  cin >> B >> T;

  int altura = 70;
  int base = abs(B-T);
  int triangulo = (base*altura)/2; // sera sempre inteiro
  int retangulo = min(B,T)*altura;

  int felix = triangulo+retangulo;

  if ( felix > 5600 ) {
    cout << 1 << endl;
  } else {
    if ( felix < 5600 ) {
      cout << 2 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}