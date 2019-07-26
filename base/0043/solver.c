#include <stdio.h>
 int main(){
    int hx = 0, mx = 0, sx = 0;
    int hy = 0, my = 0, sy = 0;
    int hr = 0, mr = 0, sr = 0;
    int aux;
    scanf("%d %d %d",&hx ,&mx ,&sx);
    scanf("%d %d %d",&hy ,&my ,&sy);
    if(hx > hy){
        hx = 24 - hx;
        hr = hx + hy;
    }else{
        hr = hy - hx;
    }
    if(mx > my){
        aux = (60 - mx) + (60 - my);
        if(aux > 60){
            hr--;
        }
        mx = 60 - mx;
        mr = mx + my;
    }else{
        mr = my - mx;
    }
    if(sx > sy){
        aux = (60 - sx) + (60 - sy);
        if(aux > 60){
            mr--;
        }
        sx = 60 - sx;
        sr = sx + sy;
    }else{
        sr = sy - sx;
    }
    if(mr < 0){
        mr = 59;
        hr--;
    }
    if(hr < 0){
        hr = 11;
    }
    
    printf("%.02d %.02d %.02d\n", hr, mr, sr);
 }