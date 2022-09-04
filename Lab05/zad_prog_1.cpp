#include <iostream>
#include <cstring>

using namespace std;

void permute(char *str, int left = 0) {
   int size = strlen(str);
   if (size - left == 1) {
      cout << str << endl;
   }
   for (int i = left; i < size; ++i) {
      swap(*(str + left), *(str + i));

      permute(str, left + 1);

      swap(*(str + left), *(str + i));
   }
}

int main(){
   string s;
   cout << "Insert a string to display its permutations: ";
   getline(cin, s);
   permute((char *)s.c_str());
}
