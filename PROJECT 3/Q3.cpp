#include <iostream>

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom) {
    // Check if either argument is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    // Compute the greatest common divisor (GCD)
    int divisor = gcd(num, denom);

    // Reduce the fraction
    num /= divisor;
    denom /= divisor;

    return 1;
}

int main() {
    int numerator= 24;
    int denominator=2;
    

    if (reduce(numerator, denominator)) {
        std::cout << "The reduced fraction is " << numerator << "/" << denominator << std::endl;
    } else {
        std::cout << "Failed to reduce the fraction due to invalid input." << std::endl;
    }

    return 0;
}

