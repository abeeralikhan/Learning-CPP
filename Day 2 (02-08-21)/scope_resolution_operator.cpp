#include <iostream>

using namespace std;

int myAge = 19; // As of 2020

int main() {
    int myAge = 20; // As of 2021
    // In above statement I have overwrite the global variable myAge
    // Hence, i'll be accessing my local variable myAge, instead of the global variable.

    cout << "My age in 2021 --> " << myAge << endl;
    cout << "My age in 2020 --> " << ::myAge << endl;
}