#include <iostream>
#include <ctime>

int randomInt(int min, int max) {
   return (rand() % (max - min + 1)) + min;
}

class Ciag{
protected:
   int* arr;
   int size;
public:
   Ciag(){
      this->size = 0;
   }
   Ciag(int size){
      this->size = size;
      this->arr = new int [size];
      for (int i = 0; i < size; ++i) {
         this->arr[i] = randomInt(0, 100);
      }
   }
   ~Ciag() {
      delete [] arr;
   }
   void print() {
      if (!this->size) {
         std::cout << "brak elementow ciagu\n";
         return;
      }
      for (int i = 0; i < this->size; ++i) std::cout << this->arr[i] << ' ';
      std::cout << '\n';
   }
   void add(int a) {
      int* temp = new int[this->size + 1];
      temp[this->size] = a;
      std::copy(arr, arr + this->size, temp);
      delete [] arr;
      arr = temp;
      delete [] temp;
      ++this->size;
   }
};
class my_stat : public Ciag{
private:
      int my_sum;
public:
   my_stat() {
      this->size = 0;
   }
   my_stat(int size) {
      this->size = size;
      this->arr = new int[size];
      for (int i = 0; i < size; ++i) {
         this->arr[i] = randomInt(0, 100);
         this->my_sum = 0;
         for (int i = 0; i < this->size; ++i) {
            this->my_sum += this->arr[i];
         }
      }
   }
   void print_sum() {
      this->my_sum = 0;
      if (!this->size) {
         std::cout << "suma: " << 0 << '\n';
         return;
      }
      for (int i = 0; i < this->size; ++i) this->my_sum += this->arr[i];
      std::cout << "suma: " << my_sum << '\n';
   }
};

int main() {
   srand(time(0));

   Ciag a;
   a.print();
   a.add(15);
   a.add(77);
   a.print();

   std::cout << '\n';

   my_stat suma(5);
   suma.print();
   suma.print_sum();
   suma.add(5);
   suma.print();
   suma.print_sum();

   return 0;
}