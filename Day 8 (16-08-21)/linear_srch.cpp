#include <iostream>

using namespace std;

int linear_search(int A[], int target, int n) {
    for(int i = 0; i < n; i++) {
        if(A[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int list[] = {1, 5, 7, 9, 11, 20};
    int n = 6;
    int target = 11;

    int result = linear_search(list, target, n);

    if(result) {
        cout << target << " found at the index " << result << endl;
    } else {
        cout << "Not found!" << endl;
    }
    return 0;
}

