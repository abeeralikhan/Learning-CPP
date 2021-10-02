#include <iostream>
#include <string>

using namespace std;

class Employee {
    string CNIC; // Private - Will never be inherited

    public:
        int empID; // Public - Will always be inherited
        float salary;
        Employee() {} // Default constructor is important unless will show errors;
        Employee(int id, float sal) {
            empID = id;
            salary = sal;
        }

        void display() {
            cout << empID << " " << salary << endl;
        }
};

class Programmar : public Employee {
    int experienceInYears;

    public:
        Programmar(int id, float sal, int exp) {
            // Here we need to call the constructor of Employee class, and if we dont call any,
            // then it'll show many errors 
            // Therefore, we need to create a default constructor in the Employee class.
            experienceInYears = exp;
            empID = id;
            salary = sal;
        } // How can we run base class' constructor inside the derived class

        void display() {
            cout << empID << " " << salary << endl;
            cout << "Experience in years: " << experienceInYears << endl;
            // How can we run base class' methods inside the derived class
        }
};

int main() {
    Employee emp1(1, 10000), emp2(2, 20000); 

    emp1.display();
    emp2.display();

    Programmar p1(10, 45000, 3), p2(11, 40000, 5);

    p1.display();
    p2.display();
    return 0;
}