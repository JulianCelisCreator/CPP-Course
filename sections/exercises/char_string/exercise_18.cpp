//
// Created by juliancelis on 2026-01-11.
//
// Validate a password according to the following rules:
// - at least one uppercase letter
// - at least one lowercase letter
// - at least one digit
// - no spaces allowed
//   All checks must be done using character analysis.

#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout<<"Enter a password: ";
    getline(std::cin,password);

    bool is_uppercase = false;
    bool is_lowercase = false;
    bool is_digit = false;
    bool is_space = false;
    for (char c: password) {
        if (c == ' ') {
            is_space = true;
        }
        else if (c >= 97 && c <= 122 ) {
            is_lowercase = true;
        }
        else if (c >= 65 && c <= 90) {
            is_uppercase = true;
        }
        else if (c >= 48 && c <= 57) {
            is_digit = true;
        }
    }
    if (is_uppercase && is_lowercase && is_digit && !is_space) {
        std::cout << "Password approved";
    }
    else {
        std::cout << "It doesn't reach with the rules.";
    }
}