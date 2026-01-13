//
// Created by juliancelis on 2026-01-11.
//
// Remove duplicate characters from a string, keeping only the first occurrence of each character.

#include <iostream>
#include <string>

int main () {
    std::string word;
    std::string character;
    std::cout << "Enter a word: ";
    getline(std::cin,word);


    if (word.empty()) {
        std:: cout << "No words entered :(";
        return 0;
    }


    for (char i : word) {
        bool is_found = false;
        for (char j : character) {
            if (i == j) {
                is_found = true;
                break;
            }
        }
        if (!is_found) {
            character += i;
        }
    }
    std::cout<<character;
    return 0;
}