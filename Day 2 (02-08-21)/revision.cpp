#include <iostream>
//#include <string>

using namespace std;

int main() {
    int start = 1, stop = 10;

    for(int i=start; i<=stop; i++) {
        if(i%2 == 0) {
            cout << i << " is an even number!";
            cout << "\n";
        } else {
            cout << i << " is an odd number!";
        }
    }

    return 0;
}
