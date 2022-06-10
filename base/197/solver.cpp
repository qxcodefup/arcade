#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

void selection_sort(vector<pair<int, int>>& valores) {
    int size = valores.size();
    for (int i = 0; i < size; i++) {
        int idx_menor = i;
        for (int j = i; j < size; j++) {
            if (valores[j].first < valores[idx_menor].first)
                idx_menor = j;
        }
        std::swap(valores[i], valores[idx_menor]);
    }
}

int main() {
    int n { }; //valores que serão lidos, devem ser inicializados com { }
    cin >> n;

    // Vetor de pares (número, posição)
    vector<pair<int, int>> valores;

    // Adiciona valores
    for (int i = 0; i < n; i++) {
        int value { };
        cin >> value;
        valores.push_back({value, i});
    }

    std::sort(valores.begin(), valores.end(), [](auto a, auto b) {return a.first < b.first;});

    // Printa vetor
    cout << "[ ";
    for (auto val : valores) {
        cout << val.second << " ";
    }
    cout << "]" << endl;

    return 0;
}
