#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        int age;

    public: 
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void displayInfo() {
            cout << name << " is " << age << " years old." << endl;
        }
};

class Programmer: public Person {
    protected:
        string skilledIn;
        int experience;

    public:
        Programmer(string name, int age, string skilledIn, int experience): Person(name, age)
        {
            this->skilledIn = skilledIn;
            this->experience = experience;
        }

        void displayInfo() {
            Person::displayInfo();
            cout << "Has fine skills in " << skilledIn << ", and has "
            << experience << " years of experience in it." << endl; 
        }
};

// Multilevel Inheritance
class Role: public Programmer {
    protected:
        string role;
        float salary;

    public:
        Role(string name, int age, string skilledIn, int experience,
        string role, float salary): Programmer(name, age, skilledIn, experience)
        {
            this->role = role;
            this->salary = salary;
        }

        void displayInfo() {
            Programmer::displayInfo();
            cout << "Working as a/an " << role << ", with salary of Rs." << salary << endl;
        }
};
int main() {
    Role r1("Abeer Ali Khan", 21, "Python", 3, "Software Engineer", 45000);
    r1.displayInfo();
    return 0;
}