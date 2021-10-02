#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int* address_of_a = &a;

    cout << "Address of variable a stroring value 3 is " << address_of_a << endl;
    cout << address_of_a <<" at this address, stored value is " << *address_of_a << endl;

    return 0;
}