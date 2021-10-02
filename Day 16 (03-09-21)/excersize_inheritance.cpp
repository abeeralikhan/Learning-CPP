#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator {
    protected:
        float result;
    public:
        void add(float, float);
        void subtract(float, float);
        void multiply(float, float);
        void divide(float, float);
        void displayResult();
};

void SimpleCalculator::add(float a, float b) {
    result = a + b;
    displayResult();
}

void SimpleCalculator::subtract(float a, float b) {
    result = a - b;
    displayResult();
}

void SimpleCalculator::multiply(float a, float b) {
    result = a * b;
    displayResult();
}

void SimpleCalculator::divide(float a, float b) {
    result = a / b;
    displayResult();
}

void SimpleCalculator::displayResult() {
    cout << result << endl;
}

class ScientificCalculator {
    protected:
        float result;

    public:
        void power(float, float);
        void squareRoot(float);
        void sine(float);
        void displayResult();
};

void ScientificCalculator::power(float a, float n) {
    result = pow(a, n);
    displayResult();
}

void ScientificCalculator::squareRoot(float a) {
    result = sqrt(a);
    displayResult();
}

void ScientificCalculator::sine(float a) {
    result = sin(a);
    displayResult();
}

void ScientificCalculator::displayResult() {
    cout << result << endl;
}

class HybirdCalculator: public SimpleCalculator, public ScientificCalculator {
    
};

int main() {
    HybirdCalculator myCalc;

    myCalc.add(2, 4);
    myCalc.divide(4, 2);
    myCalc.power(4, 2);
    myCalc.squareRoot(9);
    return 0;
}