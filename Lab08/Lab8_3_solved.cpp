#include <iostream>

#define mmax(a,b) a>b?a:b

int main() {
   int n = mmax(1, 2);
   std::cout << n << '\n';

   return 0;
}