#include <iostream>
#include <string>

using namespace std;

int main() {
    string abbu = "Abeer";
    string &coder = abbu;

    cout << "For home, my name is " << abbu << endl;
    cout << "For Hamna, my name is " << coder << endl;

    abbu = "Coder";

    cout << "After updating the base case" << abbu << endl;
    cout << "For home, my name is " << abbu << endl;
    cout << "For Hamna, my name is " << coder << endl;

    coder = "Love";

    cout << "After updating the secondary case" << abbu << endl;
    cout << "For home, my name is " << abbu << endl;
    cout << "For Hamna, my name is " << coder << endl;

}