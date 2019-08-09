#include <stdio.h>

int main(){
    int h = 0, m = 0, d = 0;
    char s = 0;

    scanf("%d %d %c %d", &h, &m, &s, &d);
    
    int time = 6 * h + m / 10;
    time += (s == 'H') ? d : -d;
    time = (time % (12 * 6));
    if(time < 0)
        time += 72;
    h = time / 6;
    s = (time % 6) * 10; 
    printf("%02d %02d\n", h, s);
    return 0;
}