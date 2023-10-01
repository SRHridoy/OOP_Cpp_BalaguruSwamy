//Write a Program using class to process Shopping List for a Departmental Store. The list includes details such as the Code No and Price of each item and perform the operations like Adding, Deleting Items to the list and Printing the Total value of an Order...

#include <iostream>
using namespace std;

const int MAX_ITEMS = 100; // Maximum number of items in the shopping list

class ShoppingItem {
private:
    int code;
    double price;

public:
    ShoppingItem(int c = 0, double p = 0.0) : code(c), price(p) {}

    int getCode() const {
        return code;
    }

    double getPrice() const {
        return price;
    }
};

class ShoppingList {
private:
    ShoppingItem items[MAX_ITEMS];
    int itemCount;

public:
    ShoppingList() : itemCount(0) {}

    void addItem(const ShoppingItem& item) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount] = item;
            cout << "Item with Code No " << item.getCode() << " added to the list." << endl;
            itemCount++;
        } else {
            cout << "Cannot add more items. The list is full." << endl;
        }
    }

    void deleteItem(int code) {
        int indexToDelete = -1;
        for (int i = 0; i < itemCount; i++) {
            if (items[i].getCode() == code) {
                indexToDelete = i;
                break;
            }
        }

        if (indexToDelete != -1) {
            cout << "Item with Code No " << code << " deleted from the list." << endl;
            for (int i = indexToDelete; i < itemCount - 1; i++) {
                items[i] = items[i + 1];
            }
            itemCount--;
        } else {
            cout << "Item with Code No " << code << " not found in the list." << endl;
        }
    }

    void printTotalValue() {
        double total = 0.0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].getPrice();
        }
        cout << "Total value of the order: $" << total << endl;
    }
};

int main() {
    ShoppingList shoppingList;

    // Add items to the list
    shoppingList.addItem(ShoppingItem(101, 10.99));
    shoppingList.addItem(ShoppingItem(102, 5.49));
    shoppingList.addItem(ShoppingItem(103, 8.75));

    // Print total value
    shoppingList.printTotalValue();

    // Delete an item
    shoppingList.deleteItem(102);

    // Print total value after deletion
    shoppingList.printTotalValue();

    return 0;
}
