#include "../include/binary.h"

std::string binaryRepr(unsigned int n) {
    std::string bin(32, '0');
    int index = 31;
    while (n > 0) {
        bin[index] = (n % 2) + '0';
        n /= 2;
        --index;
    }
    return bin;
}