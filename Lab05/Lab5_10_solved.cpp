#include <iostream>

using namespace std;

int main(){
	char str[] = "Ala ma kota";
	bool f = false;
	for(auto ch : str) {
		if (f) {
			cout << ch;
		}
		if (ch == ' ') {
			f = true;
		}
	}
	cout << endl;
}
