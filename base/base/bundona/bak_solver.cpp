#include <iostream>

int mod(int valor, int total) {
    valor = valor % total;
    return valor > 0 ? valor : valor + total;
}

int main(){
    int hora { }, min { }, dist { };
    char dir { };

    std::cin >> hora >> min >> dir >> dist;
    
    int pos = 6 * hora + min / 10;           //posição inicial
    
    pos +=  (dir == 'H' ? dist : -dist);     //formiga anda
    
    pos = mod(pos, 6 * 12);                  //conserta os loops
    
    hora = pos / 6;                          //divisão inteira
    min = (pos % 6) * 10;                    //resto vezes 10
    
    printf("%02d %02d\n", hora, min);
    return 0;
}