//
// Created by juliancelis on 2026-01-08.
//
// Read a sentence and display the same sentence without any spaces, manually shifting characters.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main () {
    std::string word;
    cout << "Enter a sentence: ";
    getline(cin,word);
    std::string ref_word;
    int i = 0;
    do {
        char c = word[i];
        if (c != 32) {
            ref_word += c;
        }
        i++;
    }while (i < word.size() );

    cout << ref_word;

}