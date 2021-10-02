#include <iostream>

using namespace std;

class Base {
    int data1;

    public:
        int data2;

        void setData(int data1, int data2) {
            this->data1 = data1;
            this->data2 = data2;
        }

        int getData1() {
            return data1;
        }

        int getData2() {
            return data2;
        }
};

class Derived : private Base {
    int data3;

    public:
        void process() {
            setData(5, 6);
            data3 = data2 * getData1();
        }

        void display() {
            cout << getData1() << " " << data2 << " " << data3 << endl;
        }
};

int main() {
    Derived d;

    // d.setData(5, 6); Made base class private, hence it's member function has also become private 
    d.process();
    d.display();
    return 0;
}