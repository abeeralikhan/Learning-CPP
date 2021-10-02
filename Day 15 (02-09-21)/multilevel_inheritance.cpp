#include <iostream>

using namespace std;

class Student {
    protected:
        int roll_no;

    public:
        void setRollNo(int roll_no) {
            this->roll_no = roll_no;
        }

        int getRollNo() {
            return roll_no;
        }
};

class Exam: public Student {
    protected:
        float dsaMarks;
        float iseMarks;
        bool areMarksSet = false; 

    public: 
        void setMarks(float dsa, float ise) {
            dsaMarks = dsa;
            iseMarks = ise;
            areMarksSet = true;
        }

        void displayMarks() {
            if(areMarksSet){
                cout << "DSA marks " << dsaMarks << endl;
                cout << "ISE marks " << iseMarks << endl;
            } else {
                cout << "Set marks first please!" << endl;
            }
        }
};

class Result: public Exam {
    protected:
        float totalMarks = 200;

    public:
        float getPercentage() {
            if(areMarksSet){
                return ((iseMarks + dsaMarks) / totalMarks ) * 100; 

            } else {
                cout << "Set marks first please!" << endl;
                return -1;
            }
        }

        void displayResult() {
            cout << getRollNo() << endl;
            displayMarks();
            cout << "Percentage: " << getPercentage() << "%" << endl; 
        }
};

int main() {
    Result abeer;

    abeer.setRollNo(78);
    abeer.setMarks(80, 85);
    abeer.displayResult();
    
    return 0;
}