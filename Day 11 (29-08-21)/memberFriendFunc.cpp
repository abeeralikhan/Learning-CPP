#include <iostream>
#include <string>
using namespace std;

class Laptop; // forward declaring the Laptop class to use it's member function inside the Printer class.

class Printer
{
    string brand, type;
    int ppm;
    bool isConnectionEstablished;

public:
    void assemble(string brand, string type, int ppm)
    {
        this->brand = brand;
        this->type = type;
        this->ppm = ppm;
    }

    // Will complete below class later as Laptop's class data members haven't been defined yet.
    void connectDevice(Laptop device);
};

class Laptop
{
    string brand, name, processor;
    bool printerSupportabilty;
    // Declaring below a member friend function (Only this member function can use this class's data member)
    friend void Printer::connectDevice(Laptop);
    // OR Making it as a friend class (Giving access to all it's methods to use this class's data members)
    // friend class Printer 

public:
    void assemble(string brand, string name, string processor, bool printerSupportability)
    {
        this->brand = brand;
        this->name = name;
        this->processor = processor;
        this->printerSupportabilty = printerSupportability;
    }
    void displayDetails()
    {
        cout << brand << " " << name << "" << processor << endl;
    }
};

void Printer::connectDevice(Laptop device)
{
    if (device.printerSupportabilty)
    {
        isConnectionEstablished = true;
        cout << "Connection has been established with " << device.name << endl;
    }
    else
    {
        cout << device.name <<" doesn't support a printer." << endl;
    }
}

int main()
{
    Laptop HP_FOLIO, DELL_1999;
    Printer HP_INKTANK;

    HP_FOLIO.assemble("HP", "Folio 1040", "i5 4660", true);
    DELL_1999.assemble("Dell", "1999 v2", "Pentium 4", false);
    HP_INKTANK.assemble("HP Ink Tank", "Laser", 7);

    HP_INKTANK.connectDevice(HP_FOLIO);
    HP_INKTANK.connectDevice(DELL_1999);
    return 0;
}