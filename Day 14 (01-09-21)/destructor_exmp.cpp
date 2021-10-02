#include <iostream>

using namespace std;

// Destructor is called when there's no need for an object, and it is called automatically. 
// Suppose you made an object inside an if-else statement. Once, the block is exited, that object will be destroyed
// We have the control to what actions to perform when the object is being dstroyed by using following friend function 
// ~CLASS_NAME() {........}

// Note: Destructor never takes an arguement nor does it return any value. 

class RJ45{
    static int count;

    public:
        RJ45() {
            count++;
            cout << "Constructor is CALLED. Object Count: " << count << endl;
        }

        ~RJ45() { // Explore later what can you develop using destructors
            count--;
            cout << "Destructor is CALLED. Object Count: " << count << endl;
        }
};

// Declared a static variable of the class RJ45 with the initial value of 0. 
int RJ45::count = 0;

int main() {
    cout << "Entering in our main function" << endl;
    cout << "Creating one RJ45 object obj1" << endl;
    RJ45 obj1;
    {
        cout << "--Entering in a block" << endl;
        cout << "--Creaating two objects obj2 and obj3" << endl;
        RJ45 obj2, obj3;
        cout << "--Exiting out of this block" << endl;
    } // When this block will be exited. All the objects created inside it will be destroyed!
    cout << "Exiting out of our main function" << endl;
    return 0;
}