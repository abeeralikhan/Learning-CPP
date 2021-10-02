#include <iostream>

using namespace std;

int main() {
    cout << "Size: 37.9 is " << sizeof(37.9) << endl;
    cout << "Size: 37.9f is " << sizeof(37.9f) << endl;
    cout << "Size: 37.9l is " << sizeof(37.9l) << endl;
    cout << "Size: (int)37.9 is " << sizeof((int)37.9) << endl;

    int a = 3, b = 4;
    int c = a*5+b;

    cout << c; // --> 3*5+4 --> 15+4 --> 19

    return 0;
}

