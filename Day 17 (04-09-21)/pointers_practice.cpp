#include <iostream>

using namespace std;

int main() {
    int a = 4;

    int* address_a = &a;

    cout << "The address of variable a is " << address_a << endl;
    cout << "The value at this address is " << *address_a << endl;

    // Now, dynamically allocating memory

    int *age = new int(21);

    cout << *age << endl;
    cout << age << endl;

    delete age;

    cout << *age << endl;
    cout << age << endl;

    *age = 90;
    
    cout << *age << endl;
    cout << age << endl;

    return 0;
}