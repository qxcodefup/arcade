#include <iostream>
using namespace std;

int main(){
  int N,D,A;
  
  cin >> N >> D >> A;

  if ( A > D ) 
    D += N;

  cout << (D-A) << endl;
  
  return 0;
}