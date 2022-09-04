#include <iostream>
#include <string.h>

using namespace std;

void randomArray(int *arr, int size) {
   srand(time(0));
   for(int i = 0; i < size; ++i) {
      arr[i] = (rand() % 10);
   }
}

void swapIndexes(int *arr, int a, int b) {
   int tmp = *(arr + a);
   *(arr + a) = *(arr + b);
   *(arr + b) = tmp;
}

int main(){
	int t[10];
   randomArray(t, 10);

   int a, b;
   cout << "Insert two indexes you want to swap: ";
   cin >> a >> b;
   cout << "\nArray before swap:\t";
   for (auto element : t) {
      cout << element << ' ';
   }

   swapIndexes(t, a, b);
   cout << "\nArray after swap:\t";
   for (auto element : t) {
      cout << element << ' ';
   }
   cout << endl;
}
