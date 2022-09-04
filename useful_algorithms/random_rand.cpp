#include <iostream>
#include <cstdlib>

int randomInt(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

double randomDouble(double min, double max) {
    double random = double (rand()) / double (RAND_MAX);
    return random * (max - min) + min;
}

int main() {

    srand(time(0));

    for(int i = 0; i < 5; ++i) {
        std::cout << randomDouble(0.5, 3.14) << '\n';
        std::cout << randomInt(1, 6) << '\n';
    }

    return 0;
}
