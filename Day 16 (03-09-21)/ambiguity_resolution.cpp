#include <iostream>

using namespace std;

class Base1 {
    public:
        void greet() {
            cout << "Hello there!" << endl;
        }
};

class Base2 {
    public:
        void greet() {
            cout << "How ya doing!" << endl;
        }
};

class Derived: public Base1, public Base2 {
    int a;
    // It's both parent class has a function with same name - greet(), which causes an ambiguity.
    // 1) To resolve it, make a function with same name in this derived class.
    // 2) This function will override it's parent's function.
    // 3) Now, specify using scope resolution operator which parent's function you're pointing toward. 

    public:
        void greet() {
            Base1::greet();
            Base2::greet();
        }
};

int main() {
    Derived d;

    d.greet();
    return 0;
}