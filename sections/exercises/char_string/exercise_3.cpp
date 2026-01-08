//
// Created by juliancelis on 2025-12-27.
//

// Read a string and determine how many vowels and how many consonants it contains.
// Spaces and symbols must be ignored.

#include <iostream>
#include <string>

using namespace std;



int count_vowels(string s) {
    int count_vowels {0};
    for (char c:s) {
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117){
            count_vowels++;
        }
    }
    return count_vowels;
}

int count_consonants (string s, int vowels) {
    int count_consonants {0};
    for (char c : s ) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            count_consonants++;
        }
    }
    count_consonants -= vowels;
    return count_consonants;
}

bool is_string_empty (string s) {
    bool is_empty {false};
    if (s.empty()) {
        is_empty = true;
    }
    return is_empty;
}

int main() {
    string s {"Hola mundo!"};

    if (!is_string_empty(s)) {
        int vowels = count_vowels(s);
        int consonants = count_consonants(s,vowels);

        cout << "There are " << vowels << " vowels\n";
        cout << "There are " << consonants << " consonants\n";
    }
    else {
        cout << "is empty";
    }


    return 0;
}

