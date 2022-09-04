#include <iostream>

using namespace std;

void randomArray(int *arr, int size) {
   srand(time(0));
   for(int i = 0; i < size; ++i) {
      arr[i] = (rand() % 10);
   }
}

void randomArray(float *arr, int size) {
   srand(time(0));
   const float A = 5.0;
   for(int i = 0; i < size; ++i) {
      arr[i] = (float(rand()) / float(RAND_MAX) * A);
   }
}

struct car {
	int age;
	int speed;
};

void randomArray(car *arr, int size) {
   srand(time(0));
   for(int i = 0; i < size; ++i) {
      arr[i].age = (rand() % 20);
      arr[i].speed = (rand() % 100) + 100;
   }
}

int main(){
	int t[10];
   randomArray(t, 10);

   int* p1 = t;
   for(int i = 0; i < 10; ++i) {
      cout << "address: " << p1 << ", value: " << *p1 << '\n';
      ++p1;
   }
   cout << endl;

   float t2[10];
   randomArray(t2, 10);

   float* p2 = t2;
   for(int i = 0; i < 10; ++i) {
      cout << "address: " << p2 << ", value: " << *p2 << '\n';
      ++p2;
   }
   cout << endl;

   car cars[10];
   randomArray(cars, 10);

   car* p3 = cars;
   for(int i = 0; i < 10; ++i) {
      cout << "address: " << p3 << ", values: " << (*p3).age << '\t' << (*p3).speed << '\n';
      ++p3;
   }
   cout << endl;
}
