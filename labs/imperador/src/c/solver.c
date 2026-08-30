#include <stdio.h>

int main(){
	int size = 0;
	int lion_row = -1;
	int lion_col = -1;
	scanf("%d",&size);
	char arena[size][size];
	for (int l = 0; l < size; l++) {
		for (int c = 0; c < size; c++) {
			scanf(" %c", &arena[l][c]);
			if (arena[l][c] == 'L') {
				lion_row = l;
				lion_col = c;
			}
		}
	}
	
	int sum_prisioners = 0;
	int sum_gladiators = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == lion_row || j == lion_col) {
				continue;
			}
			if ((arena[i][j] == 'C' && (i+j == size-1))) {
				sum_prisioners += 2;
			} else if(arena[i][j] == 'G') {
				sum_gladiators += 2;
			} else if(arena[i][j] == 'C') { 
				sum_prisioners += 1;
			}
		}
	}
	
	if (sum_gladiators > sum_prisioners) {
		puts("Gladiadores");
	} else if (sum_gladiators < sum_prisioners) {
		puts("Condenados a morte");
	} else {
		puts("Ninguem");
	}
	return 0;
}
