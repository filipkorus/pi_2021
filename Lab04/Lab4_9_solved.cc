#include <iostream>

int main() {
	
	for (int i = 1; i <= 100; ++i) {
		bool p = true;
		if (i % 3 == 0) {
			std::cout << "Fizz";
			p = false;
		}
		if (i % 5 == 0) {
			std::cout << "Buzz";
			p = false;
		}
		if (p) {
			std::cout << i;
		}
		std::cout << std::endl;
	}

	return 0;
}
