#include <iostream>
#include <cstdlib>

// 3

int main(int argc, char** argv) {
    while (argc < (2 << std::atoi(argv[1])) ) {std::cout << (argc <<= 1) << std::endl;}
}
