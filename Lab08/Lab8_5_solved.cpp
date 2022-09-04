#include <iostream>

class Vector2d {
private:
   int x1, x2;
public:
   Vector2d(int x1, int x2) {
      this->x1 = x1;
      this->x2 = x2;
   }

   Vector2d *setX1(int x1) {
      this->x1 = x1;
      return this;
   }

   Vector2d *setX2(int x2) {
      this->x2 = x2;
      return this;
   }

   int getX1() {
      return x1;
   }

   int getX2() {
      return x2;
   }

   Vector2d *print2d() {
      std::cout << this->x1 << ' ' << this->x2 << '\n';
      return this;
   }

   Vector2d *add(Vector2d *vector) {
      this->x1 += vector->x1;
      this->x2 += vector->x2;
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