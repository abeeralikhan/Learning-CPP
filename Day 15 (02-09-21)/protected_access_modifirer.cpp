#include <iostream>

using namespace std;

// Protected access modifier is a represents private data members and member functions that can be inherited, but
// can't be used outside derived class whether its public or private.

class Base {
    private:
        int highlyConfedential; // Private data member that can't be inherited

    protected:
        int moderateConfidential; // Private data member that can be inherited, but only be used inside derived class

    public:
        int nonConfidential; // Public data member that can be inherited and can be used outside the class

        void setData(int d1, int d2, int d3) {
            highlyConfedential = d1;
            moderateConfidential = d2;
            nonConfidential = d3;
        }
};

class Derived : public Base {
    public: 
        int personalVariable = 5;

        void displayModerate() {
            cout << moderateConfidential << endl; 
        }
};

int main() {
    Derived d;

    d.setData(1, 2, 3);
    cout << d.nonConfidential << endl; // Public data member of the base class, can be accessed
    cout << d.personalVariable << endl; // Public data member of the derived class, can be accessed
    // cout << d.moderateConfidential << endl; --> Protected Data member of the base class, can't be accessed directly
    d.displayModerate();  // Accessing protected data member indirectly
    return 0;
}