#include <iostream>

using namespace std;

class Average {
    int x, y, z, n;

    // Performing constructor overloading
    public:
        Average() {
            x = 0;
            y = 0;
            z = 0;
            n = 1;
        }

        Average(int x, int y) {
            this->x = x;
            this->y = y;
            z = 0;
            n = 2;
        }

        Average(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
            n = 3;
        }

        void displayAverage() {
            cout << (x+y+z)/n << endl;
        }
};

int main() {
    Average a1, a2(4, 6), a3(10, 10, 10);

    a1.displayAverage();
    a2.displayAverage();
    a3.displayAverage();

    return 0;
}