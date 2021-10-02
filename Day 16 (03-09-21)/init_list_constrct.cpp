#include <iostream>

using namespace std;

// Syntax for initializing list in constructor

class Test {
    public:
        int a, b;
        // Test(int i, int j): a(i), b(a + j) --> Will work as intended
        // Test(int i, int j): a(2*i), b(j) --> Will work as intended
        // Test(int i, int j): a(b + i), b(j) --> Will not work as intended, becase b is not initialized yet.

        Test(int i, int j): a(i), b(j) {
            cout << "Test constructor has been initialized!" << endl;
        }
};

int main() {
    Test t1(4, 5);
    cout << "a --> " << t1.a << endl;
    cout << "b --> " << t1.b << endl;
    return 0;
}