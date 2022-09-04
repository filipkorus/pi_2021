//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurence counting
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};

  	int count[100];
	for(int i = 0; i < 100; ++i) {
		count[i] = 0;
	}


	for(int i = 0; i < sizeof(digits)/sizeof(int); ++i) {
		count[digits[i]]++;
	}

	for(int i = 0; i < 100; ++i) {
		if(count[i]) {
			cout << i << " occurred " << count[i] << " times\n";
		}
	}

  return 0;
}
