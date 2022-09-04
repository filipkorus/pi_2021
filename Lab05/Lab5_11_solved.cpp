#include<iostream>

using namespace std;

int main(){
	int *p;

	if(1) {
		int i = 0;
		p = &i;
	}
	cout << *p << endl;
	
}
