#include <iostream>
#include <string>
using namespace std;

class Mouse{
    string brand, model;

    public:
        Mouse(){} //Default Constructor

        Mouse(string b, string m){
            brand = b;
            model = m;
        }

        // Following is the exampel of a "Copy Constructor"
        // In which, a new object copies the attributes of an already declared object and they share attributes.
        Mouse(Mouse &obj) {
            brand = obj.brand;
            model = obj.model;
        }

        void display() {
            cout << brand << " " << model << endl;
        }
        // Note: When no copy constructor found, compiler will supply its own. 


};
int main() {
    Mouse m1, m2, m3, m4;

    m2 = Mouse("A4 Tech", "G3-280N");
    m2.display();
    m3 = Mouse("Logictect", "M009");
    m3.display();

    Mouse m2_(m2); // Copy constructor is invoked
    m2_.display();

    // Following are the two critical cases
    m4 = m2; // Copy constructor is not invoked. Becase object has already been declared above.
    m4.display();
    Mouse m5 = m2; // Copy constructor is invoked. Becase object was not declared before. 
    m5.display();
    return 0;
}