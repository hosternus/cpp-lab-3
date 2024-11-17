#include <iostream>
#include <cstdlib>

using namespace std;

// 3

int main(int argc, char** argv) {
    while (argc < (2 << atoi(argv[1])) ) {cout << (argc <<= 1) << endl;}
}
