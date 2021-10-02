#include <iostream>

using namespace std;

union money { // ==> this datatype will be having space of 4 bytes max
    int rice; // 4 Bytes
    float currency; // 4 Bytes
    char car; // 1 Byte
};

int main() {
    union money dollars;
    dollars.currency = 20; // 20 Dollars
    string name = "Abeer";
    cout << sizeof(dollars.currency);
    return 0;
}