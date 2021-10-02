#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    int bookId;
    int price;

public:
    void setTitle(string title)
    {
        this->title = title;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    void setBookId(int bookId) {
        this->bookId = bookId;
    }

    string getTitle()
    {
        return title;
    }

    int getPrice()
    {
        return price;
    }

    int getBookId() {
        return bookId;
    }
};

int main()
{
    Book books[6];

    for(int i = 0; i<6; i++) {
        string title;
        int price;
        books[i].setBookId(i+1);
        cout<<"Enter title of book " << i << endl;
        cin>>title;
        books[i].setTitle(title);
        cout<<"Enter price of " << title << endl;
        cin>>price;
        books[i].setPrice(price);
    }

    for(int i = 0; i<6; i++) {
        cout << books[i].getBookId() << " " << books[i].getTitle() << " " << books[i].getPrice() << endl;  
    }
    return 0;
}