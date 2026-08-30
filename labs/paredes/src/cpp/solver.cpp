#include <iostream>

int main() {
    int size { };
    std::cin >> size;

    int max { };
    std::cin >> max;
    int count { 1 };

    while (size--) {
        int num { };
        std::cin >> num;

        if (num > max) {
            max = num;
            count += 1;
        }
    }
    std::cout << count << '\n';
}