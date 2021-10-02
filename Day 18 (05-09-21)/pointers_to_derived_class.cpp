#include <iostream>

using namespace std;

class BaseClass {
    public:
        int var_base;
        void displayBase() {
            cout << "Base class variable var_base's value is " << var_base << endl;
        }
};

class DerivedClass: public BaseClass {
    public:
        int var_derived;
        void displayDerived() {
            cout << "Derived class variable var_derived value is " << var_derived << endl;
        }
};

int main() {
    BaseClass* base_ptr = new DerivedClass;
    DerivedClass* derived_ptr = new DerivedClass;

    base_ptr->var_base = 69;
    base_ptr->displayBase();

    derived_ptr->var_base = 40;
    derived_ptr->var_derived = 40;
    derived_ptr->displayBase();
    derived_ptr->displayDerived();
    return 0;
}