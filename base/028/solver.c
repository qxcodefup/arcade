#include <stdio.h>

int main(){
    int n, x, y, s;
    char c;

    scanf("%d", &n);
    scanf("%d ", &x);
    scanf("%d ", &y);
    scanf("%c ", &c);
    scanf("%d", &s);

    if(c == 'R') {
		x += s;
		x = (((x % n) + n) % n);
	}
        
    else if(c == 'L') {
		x -= s;
		x = (((x % n) + n) % n);
	}
        
    else if(c == 'U') {
		y -= s;
		y = (((y % n) + n) % n);
	}
        
    else if(c == 'D') {
		y += s;
		y = (((y % n) + n) % n);
	}
            
    printf("%d %d\n", x, y);
    return 0;
}
