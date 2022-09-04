#include <iostream>
using namespace std;

int main(){
	int t[10][10];

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			t[i][j] = (i+1)*(j+1);
			cout << t[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}

