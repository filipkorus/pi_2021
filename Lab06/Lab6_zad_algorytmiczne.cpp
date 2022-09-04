#include <iostream>

int t[1000000];

int main() {
	int n = 0;
	while (std::cin >> t[n]) {
		if (t[n] < 0) {
			break;
		}
		++n;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (t[i] * t[i] == t[j]) {
				std::cout << t[i] << " is square root of " << t[j] << '\n';
			}
		}
	}

	return 0;
}
