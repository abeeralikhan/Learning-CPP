#include <iostream>

using namespace std;

int fact(int n) {
    if (n <= 1) {
        return n;
    }
    return n * fact(n-1);
}

int fib_series(int n) {
    if (n < 2) {
        return 1;
    }

    return fib_series(n-2) + fib_series(n-1);
}
int main() {
    //cout << fact(6);
    cout << fib_series(5);
    return 0;
}