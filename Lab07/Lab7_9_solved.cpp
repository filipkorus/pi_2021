#include <iostream>
#include <random>
#include<time.h>

using namespace std;

struct SquarePolynomial {
	double a;
	double b;
	double c;

	SquarePolynomial(double a_, double b_, double c_) {
		a = a_;
		b = b_;
		c = c_;
	}
};

struct SquareRoots {
	double first;
	double second;
	bool exists;

	SquareRoots(double first_ = 0, double second_ = 0, bool exists_ = true) {
		first = first_;
		second = second_;
		exists = exists_;
	}
};

double delta(SquarePolynomial *polynomial) {
	return polynomial->b * polynomial->b - 4 * polynomial->a * polynomial->c;
}

SquareRoots *calculate(SquarePolynomial *polynomial) {
	double d = delta(polynomial);
	
	SquareRoots *result = new SquareRoots;	

	if (d >= 0) {	
		double s = sqrt(d);

		result->first = (-polynomial->b - s) / (2 * polynomial->a);
		result->second = (-polynomial->b + s) / (2 * polynomial->a);
	} else {
		result->exists = false;
	}

	return result;
}

int main() {
	
	double a, b, c;

	cout << "Insert a: ";
	cin >> a;
	cout << "Insert b: ";
	cin >> b;
	cout << "Insert c: ";
	cin >> c;

	SquarePolynomial polynomial(a, b, c);
	SquareRoots *roots = calculate(&polynomial);
	
	if (!roots->exists) {
		cout << "Roots do not exists!\n";
	} else {
		cout << "x1 = " << roots->first << "\nx2 = " << roots->second << "\n";
	}

	delete roots;

	return 0;
}
