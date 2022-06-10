#include <iostream>
#include <vector>
using namespace std;

struct Jogada {
    int pedra_a, pedra_b;
};

int calc_pontos(Jogada jog) {
    auto& [a, b] = jog;
    return abs(a - b);
}

int main() {
    int size { };
    cin >> size;
    vector<Jogada> pedras(size);
    for (int i = 0; i < size; i++) {
        auto& [a, b] = pedras[i];
        cin >> a >> b;
    }
    int best = -1;
    for (int i = 0; i < size; i++) {
        auto& [a, b] = pedras[i];
        if (a < 10 || b < 10)
            continue;
        if (best == -1)
            best = i;
        if (calc_pontos(pedras[i]) < calc_pontos(pedras[best]))
            best = i;
    }
    if (best == -1)
        cout << "sem ganhador\n";
    else
        cout << best << '\n';

}