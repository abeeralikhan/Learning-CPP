#include <iostream>
#include <string>

using namespace std;

typedef struct employee { // Total space requried by employee dataype will be 32 Bytes
    int eId; // 4 Bytes
    string name; // 24 Bytes
    float salary; // 4 Bytes
} emp;

struct area {
    int areaCode;
    string areaName;
    string province;
    char areaChar;
};

int main() {
    struct employee Abeer; 
    Abeer.eId = 78;
    Abeer.name = "Abeer Ali Khan";
    Abeer.salary = 120000;

    emp Hamna; // defined using typedef keyword which shortens the declaration;
    Hamna.eId = 138;
    Hamna.name = "Hamna Siddiqui";
    Hamna.salary = 200000;

    cout << "Employee#1" << endl;
    cout << "Abeer.eId --> " << Abeer.eId << endl;
    cout << "Abeer.name --> " << Abeer.name << endl;
    cout << "Abeer.salary --> " << Abeer.salary << endl; 
    cout << "Employee#2" << endl;
    cout << "Hamna.eId --> " << Hamna.eId << endl;
    cout << "Hamna.name --> " << Hamna.name << endl;
    cout << "Hamna.salary --> " << Hamna.salary << endl; 

    // ------------------AREA----------------------

    struct area nazimabad; 
    nazimabad.areaCode = 74600;
    nazimabad.areaName = "Nazimabad";
    nazimabad.province = "Sindh";
    nazimabad.areaChar = 'N';

    cout << nazimabad.areaChar;
    return 0;
}