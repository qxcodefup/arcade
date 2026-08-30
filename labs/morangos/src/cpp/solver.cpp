#include <iostream>

int main() {
	// dimensões do primeiro local
	int comp1 { }, lar1 { };
	std::cin >> comp1 >> lar1;

	// dimensões do segundo local
	int comp2 { }, lar2 { };
	std::cin >> comp2 >> lar2;
	
	// calcula a área do primeiro e segundo local
	int area1 { }, area2 { };
	area1 = comp1 * lar1;
	area2 = comp2 * lar2;

	// imprimindo a maior área
	if (area1 > area2)
		std::cout << area1 << '\n';
	else
		std::cout << area2 << '\n';

	return 0;
}