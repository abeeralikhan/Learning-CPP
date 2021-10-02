#include <iostream>
using namespace std;

class Book {
    int bookId, price; // 4 bytes + 4 bytes ==> 8 bytes
    public:
        void setDetails(int bookId, int price) {
            this->bookId = bookId;
            //this->price = price;
            (*this).price = price;
        }

        void printDetails() {
            cout << "Book ID is " << bookId << ", and price is Rs. " << price << endl;
        }
}; 

int main() {
    int size = 2;
    Book *book_ptr = new Book[size];
    Book *temp_ptr = book_ptr;

    int p, q; // for temporarily storing the inputs

    for(int i = 0; i < size; i++) {
        cout << "Enter bookID and price of book#" << i + 1 << ": " << endl;
        cin >> p >> q;
        //(*temp_ptr).setDetails(p, q);

        temp_ptr->setDetails(p, q);
        temp_ptr++;
    }

    for(int i = 0; i < size; i++){
        book_ptr->printDetails();
        book_ptr++;
    }

    delete book_ptr, temp_ptr;
    return 0;
}