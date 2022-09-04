#include <iostream>

int main() {
	int i = 100;
	while (i) {
		if (i % 3 == 1) {
			std::cout << i << std::endl;
		}
		--i;
	}

	return 0;
}
