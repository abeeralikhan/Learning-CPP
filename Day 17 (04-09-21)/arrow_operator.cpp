#include <iostream>

using namespace std;

class Student {
    int roll_no, age;

    public:
        void setDetails(int roll_no, int age) {
            this->roll_no = roll_no;
            this->age = age;
        }

        void printDetails(void) {
            cout << "Roll no is " << roll_no << ", and age is " << age << endl;
        }
};
int main() {
    // Statically initilizing an objec
    Student s1;
    s1.setDetails(138, 19);
    s1.printDetails();

    //Dynamically initializing an object
    Student *s2_ptr = new Student;
    s2_ptr->setDetails(78, 21);
    s2_ptr->printDetails();

    //(*s2_ptr).setDetails(112, 20);
    //(*s2_ptr).printDetails();

    return 0;
}