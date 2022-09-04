#include <iostream>
#include <cmath>

class Complex {
private:
   double real, imag;
public:
   Complex(double real, double imag) {
      this->real = real;
      this->imag = imag;
   }
   Complex() {
      this->real = 0;
      this->imag = 0;
   }
   bool isReal() {
      return imag == 0.0;
   }
   bool isImag() {
      return imag != 0.0;
   }
   Complex *setReal(double real) {
      this->real = real;
      return this;
   }
   Complex *setImag(double imag) {
      this->imag = imag;
      return this;
   }
   double getReal() {
      return this->real;
   }
   double getImag() {
      return this->imag;
   }
   std::string toString() {
      return Complex::isReal() ?
         std::to_string(this->real) :
         std::to_string(this->real) + (this->imag >= 0.0 ? "+" : "") + std::to_string(this->imag) + "i";
   }
   Complex *print() {
      std::cout << Complex::toString() << '\n';
      return this;
   }
   Complex *add(Complex &rhs) {
      this->real += rhs.real;
      this->imag += rhs.imag;
      return this;
   }
   Complex *subtract(Complex &rhs) {
      this->real -= rhs.real;
      this->imag -= rhs.imag;
      return this;
   }
   bool equals(Complex &rhs) {
      return (this->real == rhs.real) && (this->imag == rhs.imag);
   }
   Complex operator-=(Complex &rhs) {
      this->real -= rhs.real;
      this->imag -= rhs.imag;
   }
   Complex operator+=(Complex &rhs) {
      this->real += rhs.real;
      this->imag += rhs.imag;
   }
   Complex operator+(Complex &rhs) {
      Complex res(this->real + rhs.real, this->imag + rhs.imag);
      return res;
   }
   Complex operator-(Complex &rhs) {
      Complex res(this->real - rhs.real, this->imag - rhs.imag);
      return res;
   }
   bool operator<(Complex const& rhs) {
      return sqrt(this->imag*this->imag + this->real*this->real) < sqrt(rhs.imag*rhs.imag + rhs.real*rhs.real);
   }
   bool operator<=(Complex const& rhs) {
      return sqrt(this->imag*this->imag + this->real*this->real) <= sqrt(rhs.imag*rhs.imag + rhs.real*rhs.real);
   }
   bool operator>(Complex const& rhs) {
      return sqrt(this->imag*this->imag + this->real*this->real) > sqrt(rhs.imag*rhs.imag + rhs.real*rhs.real);
   }
   bool operator>=(Complex const& rhs) {
      return sqrt(this->imag*this->imag + this->real*this->real) >= sqrt(rhs.imag*rhs.imag + rhs.real*rhs.real);
   }
   bool operator==(Complex &rhs) {
      return (this->real == rhs.real) && (this->imag == rhs.imag);
   }
   friend std::ostream &operator<<(std::ostream &out, const Complex &rhs) {
      out << ((rhs.imag == 0.0) ?
               std::to_string(rhs.real) :
               std::to_string(rhs.real) + (rhs.imag >= 0.0 ? "+" : "") + std::to_string(rhs.imag) + "i");
      return out;
   }
};

int main() {

   Complex c1(1, 2);
   Complex c2(1, 3);

   std::cout << (c1 < c2) << '\n';

   std::cout << (c1 == c2) << '\n';

   c1.subtract(c2)->subtract(c2)->print();

   c1 += c2;
   c1 = c1 + c2 + c2;

   std::cout << c1;

   return 0;
}