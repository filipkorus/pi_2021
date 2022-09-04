#include <iostream>
#include <ctime>

class Vector {
private:
   int *arr;
   int size;
public:
   Vector(int size, int *data) {
      this->arr = data;
      this->size = size;
   }
   ~Vector() {
      delete [] this->arr;
   }
   Vector *print() {
      std::cout << '(';
      for (int i = 0; i < this->size; ++i) std::cout << arr[i] << (i == this->size - 1 ? "" : ", ");
      std::cout << ")\n";
      return this;
   }
   Vector *add(Vector *vector) {
      if (this->size != vector->size) throw std::invalid_argument("vectors must be the same size");
      for (int i = 0; i < size; ++i) this->arr[i] += vector->arr[i];
      return this;
   }
   Vector *subtract(Vector *vector) {
      if (this->size != vector->size) throw std::invalid_argument("vectors must be the same size");
      for (int i = 0; i < size; ++i) this->arr[i] -= vector->arr[i];
      return this;
   }
   bool equals(Vector &rhs) {
      if (this->size != rhs.size) return false;
      for (int i = 0; i < this->size; ++i) if (this->arr[i] != rhs.arr[i]) return false;
      return true;
   }
   Vector operator-=(Vector &rhs) {
      if (this->size != rhs.size) throw std::invalid_argument("vectors must be the same size");
      for (int i = 0; i < size; ++i) this->arr[i] -= rhs.arr[i];
   }
   Vector operator+=(Vector &rhs) {
      if (this->size != rhs.size) throw std::invalid_argument("vectors must be the same size");
      for (int i = 0; i < size; ++i) this->arr[i] += rhs.arr[i];
   }
   Vector operator+(Vector &rhs) {
      if (this->size != rhs.size) throw std::invalid_argument("vectors must be the same size");
      int* resArr = new int [size];
      for (int i = 0; i < this->size; ++i) resArr[i] = this->arr[i] + rhs.arr[i];
      return Vector(this->size, resArr);
   }
   Vector operator-(Vector &rhs) {
      if (this->size != rhs.size) throw std::invalid_argument("vectors must be the same size");
      int* resArr = new int [this->size];
      for (int i = 0; i < this->size; ++i) resArr[i] = this->arr[i] - rhs.arr[i];
      return Vector(this->size, resArr);
   }
   bool operator==(Vector &rhs) {
      if (this->size != rhs.size) return false;
      for (int i = 0; i < this->size; ++i) if (this->arr[i] != rhs.arr[i]) return false;
      return true;
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

   std::cout << (v1 == v2) << '\n';

   std::cout << v1 << v2;

   Vector v3 = v1 - v2;
   std::cout << v3;

   return 0;
}