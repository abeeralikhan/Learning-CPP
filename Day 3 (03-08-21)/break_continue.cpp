#include <iostream>

using namespace std;

int main() {
    //Break 
    cout << "Following is the demonstration of using the 'break' keyword" << endl;
    for(int i = 0; i < 6; i++) {
        if(i==3) {
            cout << "Breaking out of loop, i==3!!!!!" << endl;
            break;
        }

        cout << "i==" << i << endl;
    }
    //Continue
    cout << "Following is the demonstration of using the 'continue' keyword" << endl;
    for(int i = 0; i < 6; i++) {
        if(i==3) {
            cout << "Continuing the loop, i==3!!!!! \n Just telling i has touched 3" << endl;
            continue;
        }

        cout << "i==" << i << endl;
    }
    return 0;
}