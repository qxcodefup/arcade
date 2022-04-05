#include<bits/stdc++.h> 
using namespace std; 


int main(){
    int n;
    cin >> n;
    int A[n];
    int B[n];
    
    for(int i = 0; i < n; i++)
        cin >> A[i];
        
    for(int i = 0; i < n; i++)
        cin >> B[i];
    
    sort(A, A+n);
    sort(B, B+n);
    
    bool save_all = true;
    for(int i = 0; i < n; i++){
        if( A[i] < B[i] ){
            save_all = false;
            break;
        }
    }
    
    cout << (save_all ? "Yes" : "No") << endl;

}
