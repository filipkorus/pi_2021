#include <iostream>

class Vector {
private:
   int x_, y_;
public:
   Vector() {
      this->x_ = 0;
      this->y_ = 0;
   }
   int getX() {
      return x_;
   }
   int getY() {
      return y_;
   }
   void add_one() {
      this->x_ += 1;
      this->y_ += 1;
   }
   void print() {
      std::cout << '(' << this->x_ << ", " << this->y_ << ")\n";
   }
};

void fun1(Vector vector) {
   vector.add_one();
   vector.print();
}
void fun2(Vector *vector) {
   vector->add_one();
   vector->print();
}
void fun3(Vector &vector) {
   vector.add_one();
   vector.print();
}
//void fun4(const Vector &vector) {
//   vector.add_one(); // funkcja fun4 nie zadziala poniewaz przekazujemy stala kopie vectora, wiec nie mozemy zmienic jego wartosci
//   vector.print();
//}
void funArr(Vector *arr, int size) {
   for (int i = 0; i < size; ++i) {
      arr[i].add_one();
      arr[i].print();
   }
}

int main() {

   Vector v1, v2, v3, v4;
   v1.print();
   fun1(v1);
   v1.print();

   std::cout << '\n';
   v2.print();
   fun2(&v2);
   v2.print();

   std::cout << '\n';
   v3.print();
   fun3(v3);
   v3.print();

   // funkcja fun4 nie zadziala poniewaz przekazujemy stala kopie vectora, wiec nie mozemy zmienic jego wartosci
//   std::cout << '\n';
//   v4.print();
//   fun4(v4);
//   v4.print();

   std::cout << '\n';
   Vector arr[3];
   funArr(arr, 3);

   return 0;
}