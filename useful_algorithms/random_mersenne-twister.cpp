#include <iostream>
#include <random>

static std::random_device rd;
static std::mt19937 mt{rd()};

int randomInt(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}

double randomDouble(double min, double max) {
    std::uniform_real_distribution<double> dist(min, max);
    return dist(mt);
}

int main() {
    std::cout << randomDouble(0.0, 3.14) << " " << randomInt(1, 6) << "\n";

    return 0;
}