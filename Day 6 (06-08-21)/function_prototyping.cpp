#include <iostream>
#include <string>

using namespace std;

// function prototyping

//void show_info(string name, string roll_no, string seat_no, int year_graduation, float cgpa);
void show_info(string, string, string, int, float);

int main() {
    show_info("Abeer Ali Khan", "19B-078-SE", "ST-19007", 2023, 3.71f);
    show_info("Hammas Bin Hussain", "16B-002-SE", "ST-16007", 2020, 2.5f);
    return 0;
}

void show_info(string name, string roll_no, string seat_no, int year_graduation, float cgpa) {
    // Formal Parameters 
    cout << "Full Name: " << name << endl; 
    cout << "Roll Number: " << roll_no << endl; 
    cout << "Seat Number (NED given): " << seat_no << endl; 
    if(year_graduation < 2021) {
        cout << "Graduated in: " << year_graduation << endl; 
    } else {
        cout << "Will be graduating in: " << year_graduation << endl;
    }
    cout << "Current CGPA (out of 4): " << cgpa << endl; 
}