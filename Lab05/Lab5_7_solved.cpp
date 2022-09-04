//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  char tab[2] = {3, 7};

  cout << (void *)&tab[0] << endl; // adres zmiennej t[0] w pamici RAM
  cout << (void *)&tab[1] << endl; // adres zmiennej t[1] w pamici RAM
  cout << (void *)tab[0] << endl;
  cout << (void *)tab[1] << endl;

  return 0;
}
