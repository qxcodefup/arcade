#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

pair<vector<int>, vector<int>> separando(vector<int> vet) {
    vector<int> pares;
    vector<int> impares;
    for (auto elem : vet) {
        if (elem % 2 == 0) {
            pares.push_back(elem);
        } else {
            impares.push_back(elem);
        }
    }
    return {pares, impares};
}

string to_string(vector<int> vet) {
    stringstream ss;
    ss << "[ ";
    for (auto elem : vet)
        ss << elem << " ";
    ss << "]";
    return ss.str();
}

int main() {
    int size { };
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    auto [pares, impares] = separando(v);
    cout << to_string(impares) << '\n';
    cout << to_string(pares) << '\n';
}