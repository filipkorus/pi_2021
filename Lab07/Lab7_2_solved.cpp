#include <iostream>
#include <random>
#include<time.h>

using namespace std;

int randomInt(int min, int max, std::mt19937 &mt) {
	std::uniform_int_distribution<> dist(min, max);
	return dist(mt);
}

int main() {
	std::mt19937 mt = std::mt19937(time(0));

	int size;
	cout << "Insert size to allocate array: ";
	cin >> size;
	
	int *t = new int [size];
	
	for (int* i = t; i < t + size; i++) {
		*i = randomInt(0, 100, mt);
		cout << *i << " ";
	}

	cout << endl;
	
	delete [] t;	

	return 0;
}
