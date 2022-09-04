#include <iostream>
using namespace std;

int main(){
	int tab[] = {1, 5, 3, 10};

	int minn = 10e6,
	    maxx = -10e6,
	    sum = 0;

	const int SIZE = sizeof(tab) / sizeof(int);

	for (int i = 0; i < SIZE; ++i) {
		sum += tab[i];
		minn = min(minn, tab[i]);
		maxx = max(maxx, tab[i]);
	}

	cout << "SUM = " << sum << endl <<
		"MIN = " << minn << endl <<
		"MAX = " << maxx << endl <<
		"AVG = " << float(sum) / SIZE << endl;

	return 0;
}
