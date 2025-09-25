#include "./include/binary.h"
#include <iostream>

int main() {
    
    unsigned int n;
    std::cout << "Input positive number: ";
    std::cin >> n;
    std::cout << "Binary representation: " << binaryRepr(n) << std::endl;
    return 0;

}