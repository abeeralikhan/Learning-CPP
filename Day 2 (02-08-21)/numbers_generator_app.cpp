#include <iostream>
#include <string>

using namespace std;

void print_only_even(int start, int end) {
    for(int i=start; i<=end; i++){
        if(i%2==0) {
            cout << i << " is an even number!" << endl;
        }
    }
}

void print_only_odd(int start, int end) {
    for(int i=start; i<=end; i++){
        if(i%2!=0) {
            cout << i << " is an odd number!" << endl;
        }
    }
}
void print_all_numbers(int start, int end) {
    for(int i=start; i<=end; i++){
        cout << i << " is a number!" << endl;
    }
}

void generator(int start, int end, string decision) {
    if(decision=="even") {
        cout << "Generating Even series from " << start << " to " << end << endl;
        print_only_even(start, end);
    } else if (decision=="odd") {
        cout << "Generating Odd series from " << start << " to " << end << endl;
        print_only_odd(start, end);
    } else {
        cout << "Generating series from " << start << " to " << end << endl;
        print_all_numbers(start, end);
    }
}

int main() {
    int start, end;
    string decision; 

    cout << "Enter starting point: " << endl;
    cin >> start;
    cout << "Enter ending point: " << endl;
    cin >> end;
    cout << "Enter type of series (even|odd|all): " << endl;
    cin >> decision;
    generator(start, end, decision);
    return 0;
}


