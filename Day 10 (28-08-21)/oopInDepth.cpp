#include <iostream>

using namespace std;

class Items
{
    int itemIds[100];
    int itemPrices[100];
    int counter = 0;

public:
    void setItem(void)
    {
        cout << "Enter item id (item#" << counter << "): " << endl;
        cin >> itemIds[counter];
        cout << "Enter item price: " << endl;
        cin >> itemPrices[counter];
        counter++;
    }

    void displatItems(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "-----Item " << i << "-----" << endl;
            cout << "Item ID: " << itemIds[i] << endl;
            cout << "Item Price: " << itemPrices[i] << endl;
        }
    }
};

int main()
{
    Items dukaan;
    for (int i = 0; i < 4; i++)
    {
        dukaan.setItem();
    }

    dukaan.displatItems();
    return 0;
}