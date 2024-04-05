#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    int quantity;
    double price;

public:
    Product(string productName, int initialQuantity, double productPrice) : name(productName), quantity(initialQuantity), price(productPrice) {}
    ~Product() {}

    void displayDetails() {
        cout << "Product: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
    }

    void updateQuantity(int newQuantity) {
        quantity = newQuantity;
    }

    void updatePrice(double newPrice) {
        price = newPrice;
    }
};

int main() {
    Product products[3] = {
        Product("Laptop", 10, 999.99),
        Product("Smartphone", 20, 599.99),
        Product("Tablet", 15, 299.99)
    };

    cout << "Initial Inventory:" << endl;
    for (int i = 0; i < 3; ++i) {
        products[i].displayDetails();
        cout << endl;
    }

    // Update quantities
    products[0].updateQuantity(8);
    products[1].updateQuantity(18);

    // Update prices
    products[1].updatePrice(649.99);
    products[2].updatePrice(249.99);

    cout << "Updated Inventory:" << endl;
    for (int i = 0; i < 3; ++i) {
        products[i].displayDetails();
        cout << endl;
    }

    return 0;
}

