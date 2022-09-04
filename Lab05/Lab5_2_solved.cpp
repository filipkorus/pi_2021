#include <iostream>
using namespace std;

int main(){
	int t[10];
	int tab[] = {1, 5, 3, 10};
	int number = 1;
	
	for (int i = 1; i <= 10; ++i) {
		t[i-1] = i * i;
	}

	for (int i = 0; i < 4; ++i) {
		cout << tab[i] * tab[i] << endl;
	}

	return 0;
}
