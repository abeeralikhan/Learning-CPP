#include <iostream>

using namespace std;

class A {
    public:
        int a = 5;
};

class B: virtual public A {

};

class C: public virtual A {

};

class D: public B, public C {

};

int main() {
    A a;
    B b;
    C c;
    D d;

    cout << a.a << endl;
    cout << b.a << endl;
    cout << c.a << endl;
    cout << d.a << endl; // ambiguity has developed


    return 0;
}