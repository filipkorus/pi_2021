#include <iostream>

using namespace std;

void printEveryNthElement(char *arr, int size, int n) {
	// declare pointer for arr array
	char *p = arr;
	for (int i = 0; i < size / n; ++i) {
        	// display value of *p and increment pointer by n (to display every n-th char)
                cout << *p << ' ';
           	p += n;
	}
	cout << endl;
}

int main() {

	// declare array
	char t[int('Z') - int('A') + 1];
	const int SIZE = sizeof(t) / sizeof(char);

	// fill array with chars from 'A' to 'Z'
	for(int i = 0; i < SIZE; ++i) {
		t[i] = char(i + int('A'));
	}

	printEveryNthElement(t, SIZE, 2);

	char *p = t;
	int counter = 0;
	for(int i = 0; i < SIZE; ++i) {
		counter += i;
		p += i;
		if (counter > SIZE - 1) {
                        break;
                }
		cout << *(i + p) << ' ';
	}
	cout << endl;
	

	return 0;
}
