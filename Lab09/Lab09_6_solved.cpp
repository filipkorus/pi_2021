#include <iostream>
#include <ctime>
#include <cstring>

class Vector {
private:
   int *arr;
   int size;
public:
   Vector(int size, int *data) {
      this->arr = data;
      this->size = size;
   }
   Vector(const Vector &copy) {
      arr = new int [copy.size];
      std::memcpy(arr, copy.arr, sizeof(int) * copy.size);
   }
   ~Vector() {
      delete [] this->arr;
   }
   Vector operator+(Vector &rhs) {
      if (this->size != rhs.size) throw std::invalid_argument("vectors must be the same size");
      int* resArr = new int [size];
      for (int i = 0; i < this->size; ++i) resArr[i] = this->arr[i] + rhs.arr[i];
      return Vector(this->size, resArr);
   }
   friend std::ostream &operator<<(std::ostream &out, const Vector &rhs) {
      out << '(';
      for (int i = 0; i < rhs.size; ++i) {
         out << rhs.arr[i] << (i == rhs.size - 1 ? "" : ", ");
      }
      out << ")\n";
      return out;
   }
};

int *randomArr(int size) {
   int *arr = new int [size];
   for (int i = 0; i < size; ++i) arr[i] = rand() % 100;
   return arr;
}

int main() {
   srand(time(0));

   Vector v1(3, randomArr(3));
   Vector v2(3, randomArr(3));
   Vector v3 = v1 + v2;

   std::cout << v1 << v2 << v3;

   return 0;
}