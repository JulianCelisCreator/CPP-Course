//
// Created by juliancelis on 2025-12-26.
//
#include <iostream>
#include <limits>
#include <vector>
using namespace std;


 int main() {
    cout << "========================================"<<endl;
    cout<< "| Welcome to list handler Program |"<<endl;
    cout << "========================================"<<endl;

    vector <int> vec;

    char option {};

    do {
        if (option == 'P' || option == 'p') { // Print numbers
            system("clear");
            if (vec.empty()) {
                cout << "[] - the list is empty"<<endl;
            }
            else {
                cout << "[";
                for (int value:vec) {
                    cout << " " <<value << " ";
                }
                cout << "]";
                cout<<"\nPress enter to continue ...";
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                cin.get();
                system("clear");
            }
        }
        else if (option == 'A' || option == 'a') { // add number to vector
            int number {0};
            bool repeated {false};
            do {
                cout << "Enter a number for add: ";
                cin>> number;
                repeated = false;
                for (int values:vec) {
                    if (number == values) {
                        cout << "The number just exists"<<endl;
                        repeated = true;
                        break;
                    }
                }
                if (!repeated) {
                    vec.push_back(number);
                    cout << number << " was added" <<endl;
                }
            }while (repeated);



            cout<<"\nPress enter to continue ...";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            system("clear");
        }
        else if (option == 'M' || option == 'm') { // Calculate mean of the numbers
            if (vec.empty()) {
                cout << "Unable to calculate the mean - no data";
            }
            else {
                float mean = 0;
                for (int values:vec) {
                    mean += values;
                }
                mean = mean/(vec.size());
                cout << "The mean is: " << mean;
            }
            cout<<"\nPress enter to continue ...";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            system("clear");
        }
        else if (option == 'S' || option == 's') {
            if (vec.empty()) {
                cout << "Unable to determine the smallest number - list is empty";
            }
            else {
                int smallest = vec.at(0);
                for (int const values:vec) {
                    if (smallest > values) {
                        smallest = values;
                    }
                }
                cout<< "The smallest number is " << smallest;
            }
            cout<<"\nPress a key to continue ...";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            system("clear");
        }
        else if (option == 'L' || option == 'l') {
            if (vec.empty()) {
                cout << "Unable to determine the smallest number - list is empty";
            }
            else {
                int largest = vec.at(0);
                for (int const values: vec) {
                    if (largest < values) {
                        largest = values;
                    }
                }
                cout<< "The largest number is " << largest;
            }

            cout<<"\nPress enter to continue ...";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            system("clear");
        }
        else if (option == 'F' || option == 'f') {
            if (vec.empty()) {
                cout << "Unable to find the value - no data"<<endl;
            }
            else {
                int number {0};
                bool is_found {false};
                int count {0};
                cout << "Enter the number: ";
                cin >> number;

                for (int values : vec) {
                    if (number == values) {
                        count++;
                        is_found = true;
                    }
                }
                if (is_found == true) {
                    cout << "The number "<< number <<" appears "<< count <<" times"<<endl;;
                }
            }
        }
        else if (option == 'c' || option == 'C') {
            vec.clear();
            cout << "The vector has been cleaned.";
            cout<<"\nPress enter to continue ...";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            system("clear");
        }
        else {
            cout << "No option found - try again!" << endl;
        }

        cout << "=============== Menu ===================" <<endl;
        cout << "|   P - print numbers                  |" <<endl;
        cout << "|   A - Add a number                   |" <<endl;
        cout << "|   M - Display mean of the numbers    |" <<endl;
        cout << "|   S - Display the smallest number    |" <<endl;
        cout << "|   L - Display the largest number     |" <<endl;
        cout << "|   F - Find a number                  |" <<endl;
        cout << "|   C - Clear                          |" <<endl;
        cout << "|   Q - Quit                           |" <<endl;
        cout << "========================================" <<endl;
        cout << "Choose: ";
        cin >> option;
    }while (option != 'q' && option != 'Q');
    return 0;
}