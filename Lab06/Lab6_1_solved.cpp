#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int b = 8;

	int *pa = &a;
	int *pb = &b;

	cout << *pa << " + " << *pb << " = " << *pa + *pb << endl;
	cout << *pa << " - " << *pb << " = " << *pa - *pb << endl;

	return 0;
}
