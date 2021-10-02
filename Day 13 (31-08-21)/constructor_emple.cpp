#include <iostream>

using namespace std;

class Stack {
    int i, j, size, A[]; // i --> Newly Inserted Location. j --> First element location

    public:
    // Constructor has same name as the class name.
    // Default Constructor --> It accepts no arguements.
    // Parameterized Constructor --> It accepts more than one arguements. 

    // 1) Should always be declared in public section of the class;
    // 2) They cannot return values and do not have return types;
    // 3) We cannnot refer to their address;
        Stack(int size) {
            this->size = size;
            i = 0;
            j = 0;
        }

        void push(int data) {
            A[i] = data;
            i++;
        }

        int pop() {
            int x = A[j];
            j++;
            return x;
        }

        bool isEmpty() {
            return i==j;
        }

        void printAll() {
            if(isEmpty()) {
                for(int i = 0; i == this->i; i++) {
                    cout << A[i] << endl;
                }
            } else {
                cout << "Empty Stack!";
            }
        }

};

// Or "Constructors" can be defined as follows:
/* CLASS_NAME :: CLASS_NAME() {
    INITIAL STATEMENTS;
 }*/

int main() {
    // Implicit Call
    Stack s1(5);

    // Explicit Call
    // Stack s2 = Stack(3); --> Both are correct way to initialize an object
    s1.push(5);
    s1.push(4);
    s1.push(1);

    s1.printAll();
    return 0;
}