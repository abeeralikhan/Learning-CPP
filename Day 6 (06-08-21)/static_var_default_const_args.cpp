#include <iostream>

using namespace std;

// We'll use a static variable to take a count of how many times a function has run

int product(const int a, const int b) { // Example of constant arguements function wont be able to update them
    static int count = 0;
    count++;
    return a * b, count;
}

float calculateTotalMoney(int money, float factor = 1.25f) {
    return money * factor;
}

int main() {
    cout << "The product of 5 and 6 is " << product(5, 6) << endl;
    cout << "The product of 2 and 1 is " << product(2, 1) << endl;
    cout << "The product of 7 and 9 is " << product(7, 9) << endl;
    cout << "The product of 255 and 255 is " << product(255, 255) << endl;

    return 0;
}