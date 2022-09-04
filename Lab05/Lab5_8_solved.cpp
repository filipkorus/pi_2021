//============================================================================
// Name        : Lab8.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on reference and dereference
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int *x;
  int y = 2;

  x = &y;
  // x = y;
  *x = y;
  // *x = &y;

  // cout << *x << ' ' << &x << endl;
  cout << "wartosc zmiennej = " << y << '\n' <<
  "adres zmiennej = " << &y << '\n' <<
  "adres wskazywany przez wskaznik = " << x << '\n' <<
  "wartosc wskaznika = " << *x << endl;

  return 0;
}
