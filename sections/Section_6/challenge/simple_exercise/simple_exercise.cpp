//
// Created by juliancelis on 2025-12-22.
//

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

float calc_price(float price, int quantity, int discount_percentage) {

    const float discount = static_cast<float>(discount_percentage)/100.0f;
    float total_price = static_cast<float>(quantity) * price * (1-discount);
    return total_price;
}

int main() {
    std::string id_code;
    float price = 0.0f;
    int quantity_stock = -1;
    int discount_percentage = -1;

    int tmp;
    cin>>tmp;
    bool is_available = (tmp != 0);

    std::string desc;

    cout<<"Enter product code: ";
    std::getline(cin, id_code);

    cout<< "Enter the price: ";
    cin>>price;

    cout<< "Enter the quantity in stock: ";
    cin>>quantity_stock;

    cout<< "enter the discount percentage: ";
    cin>>discount_percentage;

    cout<< "Is available: ";
    cin>>is_available;


    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpiar buffer
    cout<< "Enter a short description: ";
    std::getline(cin>> std::ws,desc);

    cout << "\n======== Product information ====" << endl;

    cout << "Product code: " << id_code <<endl;
    cout << "Price: " << std::fixed << std::setprecision(2) << price << endl;
    cout << "Stock quantity: " << quantity_stock << endl;
    cout << "discount percentage: " << discount_percentage << " %"<<endl;
    cout << std::boolalpha;
    cout << "Is available: " << is_available<<endl;
    cout << "Description: " << desc<<endl;
    cout << "Valor total: ";
    cout << std::fixed << std::setprecision(2) << calc_price(price, quantity_stock, discount_percentage) << endl;;
    return 0;
}