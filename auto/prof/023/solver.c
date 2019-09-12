#include <stdio.h>

int main()
{
	char jog1, jog2;
	
	scanf("%c %c", &jog1, &jog2);
	
	if (jog1 == jog2) printf("empate\n");
	else if (jog1 == 'R' && jog2 == 'S') printf("jog1\n");
	else if (jog1 == 'P' && jog2 == 'R') printf("jog1\n");
	else if (jog1 == 'S' && jog2 == 'P') printf("jog1\n");
	else printf("jog2\n");	
	
    return 0;
}
