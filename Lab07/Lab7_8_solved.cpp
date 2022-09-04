#include<iostream>
using namespace std;

int clipping(int n) {
	if (n < 10) {
		return 10;
	} else if (n <= 20) {
		return n;
	}
	return 20;
}

int main() {
   
	int n;
	cout << "Insert number to be clipped: ";
	cin >> n;
	cout << clipping(n) << "\n";

	return 0;
}
