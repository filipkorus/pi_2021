#include <iostream>
#include <cstring>

class CD {
protected:
   char content[10];
   bool isReading;
public:
   CD(char *content) {
      strcpy(this->content, content);
      this->isReading = true;
   }
   char *read() {
      char* errorMsg = "Reading failed!";
      return isReading ? errorMsg : this->content;
   }
   void in_out() {
      this->isReading = !this->isReading;
   }
};

class CDRW : public CD {
public:
   bool write(char *content) {
      if (isReading) {
         return false;
      } else {
         strcpy(this->content, content);
         return true;
      }
   }
};

class BR : public CDRW {
protected:
   char content[20];
};

int main() {

}