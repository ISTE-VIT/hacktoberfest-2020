// Created by GeorgiyX (github.com/GeorgiyX) 29.10.2020.
#include <cassert>
#include <iostream>

// This is an implementation of Euclid's algorithm for
// finding the greatest common divisor for two numbers. Recursion free.
size_t getGCD(size_t a, size_t b) {
    assert(a != 0 || b != 0); // else - gcd is infinity
    size_t tmp;
    while (a) {
        tmp = a;
        a = b % a;
        b = tmp;
    }
    return b;
}

// recursion-based GCD
size_t getGCDRecursively(size_t a, size_t b) {
    assert(a != 0 || b != 0); // else - gcd is infinity
    return a ? getGCDRecursively(b % a, a) : b;
}

int main() {
    std::cout << "getGCD " << getGCD(640, 1680) << std::endl;
    std::cout << "getGCDRecursively " << getGCDRecursively(640, 1680) << std::endl;
    return 0;
}


