#include <iostream>

using namespace std;

int sumElements(int arr[], int n)
{
    int sum = 0;
    
    for ( int i = 0; i < n; i++ ) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int n = 4;
    int arr[] = {1, 2, 3, 4};

    cout << sumElements(arr, n);
    return 0;
}