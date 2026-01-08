//
// Created by juliancelis on 2025-12-27.
//
#include <iostream>
#include <string>

// Read a string and determine how many characters it contains
// without using .length() or .size().
// The count must be done by iterating character by character.
using namespace std;

int countChars(string s) {
    int count {0};
    for (char c: s) {
        count++;
    }
    return count++;
}

int main () {
    const string word {"Palabras"};
    cout<<countChars(word);
    return 0;
}