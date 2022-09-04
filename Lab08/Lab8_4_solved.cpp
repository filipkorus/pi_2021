#include <iostream>

class Vector2d {
private:
   int x1, x2;
public:
   Vector2d(int x1, int x2) {
      this->x1 = x1;
      this->x2 = x2;
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
   v1->add(v2)->print2d();

   return 0;
}