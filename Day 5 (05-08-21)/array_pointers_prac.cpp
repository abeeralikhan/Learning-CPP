#include <iostream>

using namespace std;

int main() {
    // The variable "ages" is itself a pointer which holds the address of the first block i.e 19;
    int ages[] = {19, 20, 21};

    int* pointer = ages;
    cout << "Value at ages[0] --> " << *pointer << endl;

    // Another example 
    // When we increment the array's pointer, it goes to the next block consecutively.

    char myFavAlphabets[] = {'a', 'b', 'c', 'd', 'e'};
    char* char_pointer = myFavAlphabets;

    for(int i = 0; i < 5; i++) {
        cout << "--------Iteration " << i << "--------" << endl;
        cout << "Method#1: myFavAlphabets[" << i << "] --> " << myFavAlphabets[i] << endl;
        cout << "Method#2: char_pointer + " << i << " --> " << *(char_pointer+i) << endl;
        cout << "Memory Address --> " << &myFavAlphabets+i << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}