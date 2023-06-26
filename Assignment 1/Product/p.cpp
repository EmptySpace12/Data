#include <iostream>
#include <string>
using namespace std;

class Product {
    static float discount; // Static member discount
    int pid;
    string pname;
    float price;
    int quantity;

public:
    // Constructors
    Product() {
        pid = 0;
        pname = "";
        price = 0;
        quantity = 0;
    }

    Product(int id, string name, float p, int q) {
        pid = id;
        pname = name;
        price = p;
        quantity = q;
    }

    // Destructor
    ~Product() {
        cout << "The product '" << pname << "' has been removed from inventory." << endl;
    }

    // Method to display product details
    void show_product() {
        cout << "Product ID: " << pid << endl;
        cout << "Product Name: " << pname << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    // Method to apply discount
    void apply_discount() {
        float discounted_price = price - (price * discount);
        cout << "The discounted price for '" << pname << "' is $" << discounted_price << endl;
    }
};

// Static member initialization
float Product::discount = 0.1;

int main() {
    // Create an instance of Product using the parameterized constructor
    Product book1(1, "Harry Potter", 25, 10);

    // Show book details
    book1.show_product();

    // Apply discount
    book1.apply_discount();

    return 0;
}
