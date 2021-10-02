#include <iostream>
#include <cstring>
using namespace std;

class Person{
    protected:
        int age;    
    public:
        Person() {}
        Person(int age) {
            this->age = age;
        }
        virtual void displayDetails() {
            cout << "Age of this person is " << age << endl;
        }
};

class Employee: public Person{
    float salary;
    public:
        Employee() {}
        Employee(int age, float salary): Person(age) {
            this->salary = salary;
        }
        void displayDetails() {
            cout << "Age of this employee is " << age << " and, salary Rs. " << salary << endl;
        }
};


int main() {
    Person* person_ptr;

    Employee emp_obj(21, 45000);
    Employee emp_obj2(19, 20000);

    person_ptr = &emp_obj;
    //person_ptr->displayDetails(); // Running Person class' function before making it a virtual.

    // After making Base Class' member function virtual
    person_ptr->displayDetails(); // Running derived class function

    return 0;
}