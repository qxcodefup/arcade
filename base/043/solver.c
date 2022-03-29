#include <stdio.h>
int main(){
    int hx = 0, mx = 0, sx = 0;
    int hy = 0, my = 0, sy = 0;

    scanf("%d %d %d",&hx ,&mx ,&sx);
    scanf("%d %d %d",&hy ,&my ,&sy);
    
    int sleep = hx * 3600 + mx * 60 + sx;
    int wakeup = hy * 3600 + my * 60 + sy;

    if (wakeup < sleep)
        wakeup += 24 * 60 * 60;
    
    int diff = wakeup - sleep;
    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    diff %= 60;
    int s = diff;

    printf("%.02d %.02d %.02d\n", h, m, s);
 }