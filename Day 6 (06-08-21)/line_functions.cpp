#include <iostream>

using namespace std;

// We'll give request to the compiler. The compiler can either reject or accept your inline request.
inline float average(float a, float b) {
    return (a + b) / 2;
}

int main() {
    cout << "Average of 1 and 2 is " << average(1.0f, 2.0f) << endl; 
    cout << "Average of 1 and 5 is " << average(1.0f, 5.0f) << endl; 
    cout << "Average of 3.71 and 3.19 is " << average(3.71f, 3.19f) << endl; 
    cout << "Average of 3.45 and 3.8 is " << average(3.45f, 3.8f) << endl; 
    cout << "Average of 3.45 and 3.7 is " << average(3.45f, 3.7f) << endl; 
    cout << "Average of 3.45 and 3.9 is " << average(3.45f, 3.9f) << endl; 
    cout << "Average of 10 and 20 is " << average(10.0f, 20.0f) << endl; 
    return 0;
}