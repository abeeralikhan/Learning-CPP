#include <iostream>
#include <string>

using namespace std;

class Binary {

    private:
        string s;
        bool checkBinaryNumber(string bin_number);

    public:
        void enterBinaryNumber(void);
        void onesComplement(void);
        void display(void);

};

void Binary :: enterBinaryNumber (void) {
    string temp;
    cout << "Enter a valid binary number: " << endl;
    cin >> temp;
    if (checkBinaryNumber(temp)) {
        cout << "Binary Number has been stored" << endl;
        s = temp;
    } else {
        cout << "Invalid Binary Number! Try again." << endl;
    }
}

bool Binary :: checkBinaryNumber (string bin_number) {
    for (int i = 0; i < bin_number.length(); i++) {
        if (bin_number.at(i)!='1' && bin_number.at(i)!='0') {
            return false;
        }
    }
    return true;
}

void Binary :: onesComplement (void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i)=='1') {
            s.at(i) = '0';

        } else if (s.at(i)=='0') {
            s.at(i) = '1';
        }
    }
}

void Binary :: display (void) {
    cout << s << endl;
}

int main() {
    Binary myBin;
    myBin.enterBinaryNumber();
    myBin.display();
    myBin.onesComplement();
    myBin.display();
    return 0;
}