//
// Created by juliancelis on 2026-01-08.
//
// Read a string and a character, then determine how many times that character appears in the string.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
int main() {
    std::string word = "";
    char character;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter the character to search: ";
    cin >> character;

    int counter = 0;
    for (char c: word) {
        if (character == c) {
            counter++;
        }
    }

    cout << character << " appears " << counter << " in times " << word;

}