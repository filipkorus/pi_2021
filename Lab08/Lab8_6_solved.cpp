#include <iostream>

class Vector2d {
private:
   int *arr;
public:
   Vector2d(int x1, int x2) {
      this->arr = new int [2];
      this->arr[0] = x1;
      this->arr[1] = x2;
   }

   Vector2d *setX1(int x1) {
      this->arr[0] = x1;
      return this;
   }

   Vector2d *setX2(int x2) {
      this->arr[1] = x2;
      return this;
   }

   int getX1() {
      return arr[0];
   }

   int getX2() {
      return arr[1];
   }

   Vector2d *print2d() {
      std::cout << this->arr[0] << ' ' << this->arr[1] << '\n';
      return this;
   }

   Vector2d *add(Vector2d *vector) {
      this->arr[0] += vector->arr[0];
      this->arr[1] += vector->arr[1];
      return this;
   }
};

int main() {
   auto v1 = new Vector2d(1, 2);
   auto v2 = new Vector2d(3, 4);

   v2->setX1(12)->setX2(100);
   v1->add(v2)->print2d();

   return 0;
}