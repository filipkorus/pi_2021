#include <iostream>

class Vector {
public:
   double *data_;
   Vector(double data) {
      data_ = new double;
      *data_ = data;
      std::cout << data_ << '\n';
   }
   ~Vector() {
      std::cout << data_ << '\n';
      delete data_;
   }
   double add(Vector arg) {
      return *data_ + *(arg.data_);
   }
};

int main() {
   Vector a(0.0);
   Vector b(1.0);

   std::cout << a.add(b) << '\n';

   return 0;
}