#include <stdio.h>

int main()
{
	int jog1 = 0, jog2 = 0, jog3 = 0;
	
	scanf("%d %d %d", &jog1, &jog2, &jog3);
	
	if (jog1 != jog2 && jog1 != jog3)
		printf("jog1\n");
	else if (jog2 != jog1 && jog2 != jog3)
		printf("jog2\n");
	else if (jog3 != jog1 && jog3 != jog1)
		printf("jog3\n");
	else printf("empate\n");
	
    return 0;
}
