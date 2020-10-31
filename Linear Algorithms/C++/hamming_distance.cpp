// Created by GeorgiyX (github.com/GeorgiyX) 31.10.2020.
#include <iostream>

/**
 * Calculates the Hamming distance for two buffers
 * @param left - 1th buffer
 * @param right - 2nd buffer
 * @param size - size of the smallest buffer
 * @return distance
 */
size_t hammingDistance(const char *left, const char *right, size_t size) {
    size_t hammingDistance = 0;
    for (size_t i = 0; i < size; ++i) { // for byte in message
        for (size_t j = 0; j < 8; ++j) { // for bits in byte
            if(((left[i] >> j) & 1) != ((right[i] >> j) & 1))
                hammingDistance++;
        }
    }
    return hammingDistance;
}

int main() {
    char left[] = {1, 2, 0};
    char right[] = {5, 2, 0};
    std::cout << hammingDistance(left, right, std::min(sizeof(left), sizeof(right))) << std::endl;
    return 0;
}
