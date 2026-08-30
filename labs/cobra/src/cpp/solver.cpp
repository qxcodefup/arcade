#include <iostream>

int mod(int value, int size) {
    value = value % size;
    if (value < 0)
        value += size;
    return value;
}

int main() {
    int size { }, x { }, y { }, dist { };
    char dir { };
    std::cin >> size >> x >> y >> dir >> dist;
    if (dir == 'R')
        x += dist;
    else if (dir == 'L')
        x -= dist;
    else if (dir == 'U')
        y -= dist;
    else if (dir == 'D')
        y += dist;
    x = mod(x, size);
    y = mod(y, size);
    std::cout << x << " " << y << "\n";  
}