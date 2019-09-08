#include <stdio.h>


int main(){
	int h, m, s;
	
	scanf("%d %d %d", &h, &m, &s);
	
	if(s == 59) {
		s = 00;
		if(m == 59) {
			m = 00;
			if(h == 23) {
				h = 00;
			} else {
                h++;
            }
		}
        else {
            m++;
        }
	} else {
		s++;
	}
	
	printf("%02d %02d %02d\n", h, m, s);
	
	return 0;
}
