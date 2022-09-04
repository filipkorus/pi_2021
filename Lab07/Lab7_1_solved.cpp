#include <iostream>
#include <random>
#include<time.h>
using namespace std;

struct Car {
	int displacement;
	int seats;

	Car(int displacement_, int seats_) {
		displacement = displacement_;
		seats = seats_;
	}
};

int randomInt(int min, int max, std::mt19937 &mt) {
	std::uniform_int_distribution<> dist(min, max);
	return dist(mt);
}

int main() {
	std::mt19937 mt = std::mt19937(time(0));

	Car *car = new Car(
		randomInt(2, 10, mt),
		randomInt(2, 9, mt)		
	);
	cout << car->displacement << " " << car->seats << "\n";

	delete car;

	return 0;
}
