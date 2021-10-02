#include <iostream>

using namespace std;

// Call by reference using pointers 
void swapPointers(int* a, int* b) { //   temp    a     b
    int temp = *a;          //    *a    *a    *b
    *a = *b;                //    *a    *b    *b
    *b = temp;              //    *a    *b    *a 
}
// Call by reference using reference variable 
void swapRefrences(int &a, int &b) { //   temp    a     b
    int temp = a;         //    *a    *a    *b
    a = b;               //    *a    *b    *b
    b = temp;              //    *a    *b    *a 
}

int main() {
    int a = 5, b = 10;

    cout << "Before swap" << endl;
    cout << "a is " << a << " & b is " << b << endl;

    swapRefrences(a, b);

    cout << "After swap" << endl;
    cout << "a is " << a << " & b is " << b << endl;

    return 0;
}