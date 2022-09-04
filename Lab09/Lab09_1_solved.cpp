#include <iostream>

class Time {
private:
   int time;
public:
   Time(int minutesSinceMidnight) {
      this->time = minutesSinceMidnight;
   }
   Time(int hour, int minute) {
      this->time = hour * 60 + minute;
   }
   Time(std::string time) {
      int hr = int(time[0] - '0') * 10 + int(time[1] - '0');
      int min = int(time[3] - '0') * 10 + int(time[4] - '0');
      this->time = hr * 60 + min;
   }
   Time* print() {
      std::cout << (this->time - (this->time % 60)) / 60 << ':' << this->time % 60 << '\n';
      return this;
   }
};

int main() {

   Time t1(1297);
   Time t2(21, 37);
   Time t3("21:37");

   t1.print();
   t2.print();
   t3.print();

   return 0;
}