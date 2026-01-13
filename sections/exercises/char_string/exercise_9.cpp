//
// Created by juliancelis on 2026-01-08.
//Determine how many words exist in a sentence, considering that words are separated by one or more consecutive spaces.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin,sentence);
    int counter_words {0};
    bool inside_word = false;
    if (sentence.empty()) {
        cout << "The sentence is empty";
    }
    else {
        for (char c: sentence) {
            if (c != 32) {
                if (!inside_word) {
                    counter_words++;
                    inside_word = true;
                }
            }
            else {
                inside_word = false;
            }
        }
    }

    cout << "The sentence\n"<<sentence<<endl;
    cout << "Has " << counter_words <<" words";
    return 0;
}

