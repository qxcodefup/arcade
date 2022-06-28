#include <iostream>

int main() {
	int n1 { }, n2 { };
	char op { };

	std::cin >> n1 >> n2 >> op;

	switch (op) {
		case '+':
			std::cout << n1 + n2 << std::endl;
			break;

		case '-':
			std::cout << n1 - n2 << std::endl;
			break;

		case '*':
			std::cout << n1 * n2 << std::endl;
			break;

		case '/':
			std::cout << n1 / n2 << std::endl;
			break;
	}

	return 0;
}