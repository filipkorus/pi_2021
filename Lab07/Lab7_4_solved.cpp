#include <iostream>
#include <random>
#include<time.h>

using namespace std;

double delta(double a, double b, double c) {
	return b*b - 4*a*c;
}

void printResults(double a, double b, double c) {
	double d = delta(a, b, c);
	double s = sqrt(d);

	double x1 = (-b - s) / (2 * a);
	double x2 = (-b + s) / (2 * a);
	
	d < 0 ? (cout << "Brak miejsc zerowych!\n") : (cout << "x1 = " << x1 << "\nx2 = " << x2 << "\n");
}

int main() {
	
	double a, b, c;

	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	printResults(a, b, c);
	
	return 0;
}
