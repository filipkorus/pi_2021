#include <iostream>

void funkcja(int *t1, int t1_size, int *t2, int t2_size) {
	for (int i = 0; i < t1_size; ++i) {
		t1[i] = i + 1;
	}

	for (int i = 0; i < t2_size; ++i) {
		t2[i] = t1_size + i + 1;
	}
}

int arraySum(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum;
}

void printArr(int *arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << '\t';
	}
	std::cout << '\n';
}

int main() {

	int a, b;
	std::cin >> a >> b;
	int* t1 = new int [a];
	int* t2 = new int [b];

	funkcja(t1, a, t2, b);

	printArr(t1, a);
	printArr(t2, b);

	std::cout << arraySum(t1, a) << '\n';
	std::cout << arraySum(t2, b) << '\n';

	delete [] t1;
	delete [] t2;

	return 0;
}
