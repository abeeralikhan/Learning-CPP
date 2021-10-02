#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
    // Below is a static data member of this class whose value will remain same in all the instances
    // We also neet to declare it outise the class like --> DATA_TYPE CLASS_NAME :: VARIABLE; 
    // We use static member methods to operate static member variables of a class. 
    // We can not initilize it with value while declaring inside this class. 
    static int bookCount;

    public:
        void setTitle(string title);
        void setPrice(int price);

        string getTitle(void) {
            return title;
        }

        int getPrice(void) {
            return price;
        }

        // Below is a static function which can be directly used without initializing an
        // object. It only deals with static member variables, and will throw an error
        // on normal varibales.
        static int getCount(void) {
            return bookCount;
        }
};

// If we want don't initialize with a value, it's default value will be 0
// or we can initilize with a value. For example, int Book::bookCount = 100;
int Book::bookCount; 

void Book::setPrice(int price) {
    this->price = price;
}

void Book::setTitle(string title) {
    this->title = title;
}

int main() {
    cout << Book::getCount() << endl;
    Book sapiens, clean_code, unlimited_power;

    sapiens.setTitle("Sapiens");
    sapiens.setPrice(300);
    cout << Book::getCount() << endl;

    clean_code.setTitle("Clean Code");
    clean_code.setPrice(900);
    cout << Book::getCount() << endl;

    unlimited_power.setTitle("Unlimited Power");
    unlimited_power.setPrice(500);
    cout << Book::getCount() << endl;

    cout << sapiens.getTitle() << " " << sapiens.getPrice() << endl;
    cout << clean_code.getTitle() << " " << clean_code.getPrice() << endl;
    cout << unlimited_power.getTitle() << " " << unlimited_power.getPrice() << endl;
    return 0;
}