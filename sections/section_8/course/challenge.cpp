//
// Created by juliancelis on 2025-12-25.
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    int cents = -1;
    cout << "Digite la cantidad en centavos: " <<endl;
    cin >> cents;

    cout << "dollars: " << cents / 100  << endl;
    cout << "quarters: " << (cents % 100)/25 << endl;
    cout << "dimes: " << ((cents % 100)%25) /10  << endl;
    cout << "nickels: " << (((cents % 100)%25)%10) / 5 << endl;
    cout << "pennies: " << ((((cents % 100) %25) %10) %5) / 1 << endl;

    return 0;
}