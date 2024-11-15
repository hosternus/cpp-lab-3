#include <iostream>

using namespace std;

// 3

int main(int argc, char** argv) {


    cin >> argc;

    while (argc < (1 << argc)) {cout << (argc <<= 1) << endl;}
}

