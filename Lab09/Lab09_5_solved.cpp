#include <iostream>
#include <cstring>

class Vector {
public:
   double *data_;
   Vector(double data) {
      data_ = new double;
      *data_ = data;
      std::cout << data_ << '\n';
   }
   Vector(const Vector &copy) {
      data_ = new double;
      std::memcpy(data_, copy.data_, sizeof(double));
   }
   ~Vector() {
      std::cout << data_ << '\n';
      delete data_;
   }
   double add(Vector arg) {
      return *data_ + *(arg.data_);
   }
   double addWsk(Vector *arg) {
      return *data_ + *(arg->data_);
   }
   double addRef(Vector &arg) {
      return *data_ + *(arg.data_);
   }
};

int main() {
   Vector a(0.0);
   Vector b(1.0);

   std::cout << a.addWsk(&b) << '\n';
   std::cout << a.addRef(b) << '\n';

   return 0;
}