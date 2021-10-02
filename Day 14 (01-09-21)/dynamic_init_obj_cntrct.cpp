#include <iostream>

using namespace std;

// Dynamically initialization of objects using constructors.
// Dynamically: During runtime decide whether to create object or not. 
// Example: In runtime, if user has entered floating data, then init a constructor.
//          If user has init int data, then init another cosntructor.
//          Lastly, if user has not entered any data, then init a constructor with default values. 

// If user can enter values in different data types, C++ compiler is smart enough to know which constructor to run
// for which datatype. We can create multiple constructors for multiple dataypes and compiler will detect which
// constructor to run based on user input. 

// ClASS_NAME(){} --> Case 1: This case is IMPORTANT if you're going to dynamically initialize objects using cnstrtrs
// CLASS_NAME(int, int, int); --> Case 2
// CLASS_NAME(int, int, float); --> Case 3
// CLASS_NAME(float, int, float); --> Case 4 

int main() {
    
    return 0;
}