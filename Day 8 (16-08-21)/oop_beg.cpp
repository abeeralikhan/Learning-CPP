#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        string fname, lname, email;
        int emp_id;

    public:
        void set_fname(string name) {
            fname = name;
        }

        void set_lname(string name) {
            lname = name;
        }

        void set_emp_id(int id) {
            emp_id = id;
        }

        void get_fname(void) {
            cout << fname << endl;
        }

        void get_lname(void) {
            cout << lname << endl;
        }

        void get_emp_id() {
            cout << emp_id << endl;
            
        }

        void get_fullname(void) {
            if ( fname.length() && lname.length() ) {
                cout << fname << ' ' << lname << endl;
            } else {
                cout << "Please set First name and Last name first!" << endl;
            }
        }

        
        void get_email(void); // We have just declared it, not gave it any functionality yet!
};

void Employee :: get_email(void) {
    if ( not fname.length() && not lname.length() ) {
        cout << "Assign Details first!" << endl;
    } else {
        cout << fname.at(0) << fname.at(fname.length()-1) << lname << "@gmail.com" << endl;
    }
}

int main() {
    string myName = "Abeer";
    Employee emp1;
    emp1.set_fname("Abeer");
    emp1.set_lname("Khan");
    emp1.set_emp_id(78);
    emp1.get_emp_id();
    emp1.get_fullname();
    emp1.get_email();

    return 0;
}