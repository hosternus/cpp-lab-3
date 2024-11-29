#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
    while (argc < (2 << std::atoi(argv[1])) )if (std::cout << (argc <<= 1) << std::endl) {}
}
