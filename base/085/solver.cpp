#include <iostream>
#include <vector>
using namespace std;

int count_alone_soldiers(vector<int> vet) {
    int size = vet.size() ;

    auto existe = [&](int pos) {
        return pos >= 0 && pos < size;
    };

    auto is_doctor = [&](int pos) {
        return existe(pos) && vet[pos] == 1;
    };

    auto is_soldier = [&](int pos) {
        return existe(pos) && vet[pos] == 0;
    };

    int count { 0 };
    for (int i = 0; i < size; i++) {
        if (is_soldier(i) &&  // is soldier
            !is_doctor(i - 1) && // left
            !is_doctor(i + 1)) { // right
            count++;
        }
    }
    return count;
}

int main() {
    size_t size { };
    cin >> size;
    vector<int> v(size);
    for (size_t i = 0; i < size; i++)
        cin >> v[i];

    cout << count_alone_soldiers(v) << '\n';
    // int count { 0 };
    // if (v[0] == 0 && size > 1 && v[1] == 0)
    //     count++;
    // if (v[size - 1] == 0 && size > 1 && v[size - 2] == 0)
    //     count++;
    // for (size_t i = 1; i < size - 1; i++) {
    //     if (v[i] == 0 && v[i - 1] == 0 && v[i + 1] == 0)
    //         count++;
    // }
    // cout << count << '\n';
}