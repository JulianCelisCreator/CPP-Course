//
// Created by juliancelis on 2026-01-10.
// Determine whether a string contains at least one numeric digit.
#include <iostream>
#include <string>

int main() {

    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::cin >> sentence;

    bool exist_number = false;

    for (char c: sentence) {
        if (c > 47 && c < 58) {
            exist_number = true;
            break;
        }
    }

    if (exist_number == true) {
        std::cout << "Exists number(s) in the sentence";
    }
    else {
        std::cout << "There aren't numbers in the sentence";
    }
}