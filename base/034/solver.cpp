#include <iostream>

int mod (int valor, int total) {
    valor = valor % total;
    return valor > 0 ? valor : valor + total;
}

int main(){
    int hora { }, min { }, dist { };
    char dir { };
    std::cin >> hora >> min >> dir >> dist;

    int pos = hora * 6 + min / 10;          //posicao inicial

    pos += dir == 'H' ? +dist : -dist;      //posicao final

    pos = mod(pos, 12 * 6);                 //conserto da posicao

    hora = pos / 6;
    min = (pos % 6) * 10;

    printf("%02d %02d\n", hora, min);

    return 0;
}