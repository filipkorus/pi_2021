//============================================================================
// Name        : Lab4_1.cpp
// Author      : Michal Grega
// Version     : V1.0
// Copyright   : AGH 2017
// Description : Illustration of brake-continue
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int i;
  for( i=0; i<100; i++ ) {
	   cout<<"--1, iteracja " << i <<endl;
      if( i<10 )
	    continue;
      cout<<"--2, iteracja " << i <<endl;
      if( i>20 )
		break;
      cout<<"--3, iteracja " << i <<endl;
	}

}
