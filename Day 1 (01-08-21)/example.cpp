// #include keyword is used to import a existing file.
// iostream is the file name that we're importing
#include <iostream>

// To use cout function from the iostream file, we need to specify from which namespace we're
// basically using using that function. That's why, we use "using namespace std;"
using namespace std;

/*
In every C++ program, it's crucial to use "main" function in the beginning. Because, it
specifies the entry point of the function
*/

// int is the type of data we're going to return in the end from the intended function.
int main(){
    cout<<"My first C++ Program!";
    return 0;
}

// return 0 means succesfull termination. 

// to manually compile and run a .cpp file
// First: write "g++ FILE_PATH.cpp"
// Then: "FILE_PATH.exe"