#include <iostream>
#include <string>
using namespace std;

int main() {
    //************Array Declaration************ 
    // One way
    int arrayOfMarks[5] = {1, 2, 3, 4, 5}; // IF MISTAKENLY PUT 1.1, IT'LL BE CONVERTED INTO 1
    char alphabets[5] = {'a', 'b', 'c', 'd', 'e'};
    string myFriends[3] = {"Hamna", "Waleed", "Anamta"};

    // Another way: Most preferred one!
    int arrayOfNumbers[] = {1, 2, 3, 4, 5};
    char alphabetsNEW[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    float temperatures[] = {34.5, 97.65, 10.2, 16, 45.5};

    // Last way
    int arrayOfEvenNumbers[10]; //Must specify size

    // for(int i=0; i<=10; i++){
    //     cout << arrayOfEvenNumbers[i] << endl;
    // }

    // cout << arrayOfEvenNumbers[3] << endl;
    // cout << arrayOfMarks << endl;

    //*******Array Manipulation*********

    char smallA = (char)97;
    // cout << smallA << endl;
    int count = 0;
    while(count<5) {
        cout << "Marks at position " << count << " is " << arrayOfMarks[count] << endl;
        count++;
    }


    return 0;
}