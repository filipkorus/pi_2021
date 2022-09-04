#include <iostream>

using namespace std;

int main(){
	int num = 10;
	cout << num << '\n';
	int* p = &num;
	*p = 12;
	cout << num << '\n';
}
