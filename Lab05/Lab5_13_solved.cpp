#include <iostream>
#include <string.h>

using namespace std;

struct car {
	int age;
	int speed;
};

void randomArray(int *arr, int size) {
   srand(time(0));
   for(int i = 0; i < size; ++i) {
      arr[i] = (rand() % 10);
   }
}

void randomArray(car *arr, int size) {
   srand(time(0));
   for(int i = 0; i < size; ++i) {
      arr[i].age = (rand() % 20);
      arr[i].speed = (rand() % 100) + 100;
   }
}

void reverse(char *s) {
   int size = strlen(s);
   char *pStart = s;
   char *pEnd = s + size - 1;
   for(int i = 0; i < size / 2; ++i) {
      swap(*pStart, *pEnd);
      ++pStart;
      --pEnd;
   }
}

void reverse(int *arr, int size) {
   int *pStart = arr;
   int *pEnd = arr + size - 1;
   for(int i = 0; i < size / 2; ++i) {
      swap(*pStart, *pEnd);
      ++pStart;
      --pEnd;
   }
}

void reverse(car *arr, int size) {
   car *pStart = arr;
   car *pEnd = arr + size - 1;
   for(int i = 0; i < size / 2; ++i) {
      swap(*pStart, *pEnd);
      ++pStart;
      --pEnd;
   }
}

int main(){
	char str[] = "Ala ma kota";
   cout << "\nArray before reversing: " << str;
   reverse(str);
   cout << "\nArray after reversing: " << str << endl;

   int t[10];
   randomArray(t, 10);
   cout << "\nArray before reversing: ";
   for(auto element : t) {
      cout << element << ' ';
   }
   cout << "\nArray after reversing: ";
   reverse(t, 10);
   for(auto element : t) {
      cout << element << ' ';
   }
   cout << endl;

   car cars[10];
   randomArray(cars, 10);
   cout << "\nArray before reversing: \n";
   for(auto car : cars) {
      cout << car.age << ' ' << car.speed << '\n';
   }
   cout << "\nArray after reversing: \n";
   reverse(cars, 10);
   for(auto car : cars) {
      cout << car.age << ' ' << car.speed << '\n';
   }
   cout << endl;
}
