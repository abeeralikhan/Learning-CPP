#include <iostream>
using namespace std;

class B; 
class A {
    int a;
    public:
        void displayValue() {
            cout << "a --> " << a << endl;
        }

        void setValue(int value) {
            a = value;
        }

    friend void swapValues(A&, B&);
};

class B {
    int b;
    public:
        void displayValue() {
            cout << "b -->" << b << endl;
        }

        void setValue(int value) {
            b = value;
        }

    friend void swapValues(A&, B&);
};

void swapValues(A &o1, B &o2) {
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main() {
    A obj1;
    B obj2;

    obj1.setValue(5);
    obj2.setValue(10);

    cout << "Before swapping!" << endl;
    obj1.displayValue();
    obj2.displayValue();

    swapValues(obj1, obj2);

    cout << "After swapping!" << endl;
    obj1.displayValue();
    obj2.displayValue();

    return 0;
}