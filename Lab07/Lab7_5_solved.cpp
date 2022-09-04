#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

	unsigned long long size;
	cout << "Insert size of array to allocate: ";
	cin >> size;

	int *arr = new int [size];

	sleep(10); 

	delete [] arr;

	return 0;
}
