#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {

   std::vector<std::string> args(argv, argv + argc);
   if (args[1] == "-l") {
      std::cout << "File list\n";
   } else {
      std::cout << "-l - list available files\n";
   }

   return 0;
}