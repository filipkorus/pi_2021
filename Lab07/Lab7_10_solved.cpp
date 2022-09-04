//============================================================================
// Name        : Lab7_10.cpp
// Author      : Michal Grega
// Version     :
// Copyright   : Copyright AGH 2017
// Description : Memory leak
//============================================================================

#include <iostream>
using namespace std;

int *create_and_set(size_t size, int value){
   int *array = new int[size];
   for (size_t i = 0; i < size; ++i) {
       array[i] = value;
   }
   return array;
}

int main(){
   int *tab;
	
   for(;;) {
   	tab = create_and_set(10, 666);
   	tab = create_and_set(10, 777);
	}

   delete [] tab;
}
