#include <iostream>

int adder(int a, int b) {
    return a + b;
}

double adder(double a, double b) {
    return a + b;
}

int main() {
    std::cout << adder(5, 10) << std::endl;      // int version
    std::cout << adder(5.5, 10.5) << std::endl; // double version
    return 0;
}