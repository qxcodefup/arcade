#include <iostream>

using namespace std;

bool is_vogal(char a){
    string vog = "aeiouAEIOU";
    for(int i = 0; i < 10; i++) {
        if(a == vog[i])
            return true;
    }
    return false;
}

string separa_silaba(string a){
    string nova = "";
    int i = 0;
    while(a[i] != '\0'){
        nova += a[i];
        if((a[i] == ' ') || (a[i + 1] == ' ') || (a[i + 1] == '\0')){
            i++;
            continue;
        }
        if( (is_vogal(a[i]) == true) && (is_vogal(a[i + 1]) == false))
            nova += "-";
        i++;
    }
    return nova;
}

int main() {
    string palavra;
    getline(cin, palavra);
    cout << separa_silaba(palavra) << endl;
    return 0;
}