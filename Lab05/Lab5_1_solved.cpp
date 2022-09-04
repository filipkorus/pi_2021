//============================================================================
// Name        : Lab1.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on array iteration
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab1[] = {1, 2, 3, 5, 8};
  int tab2[10] = {1, 2, 3, 4, 5, 6, 7, 8};

  cout << "Pierwsza tablica:" << endl;
  for(int i = 0; i < 5; i++){
      cout << tab1[i] << endl;
  }

  cout << "Druga tablica:" << endl;
  for(int i = 0; i < 8; i++){
      cout << tab2[i] << endl;
  }

  int i = 0;
  while(++i) {
  	cout << i << " " << tab2[i] << endl;
  }

  return 0;
}
