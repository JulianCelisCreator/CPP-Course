//
// Created by juliancelis on 2025-12-27.
//
// Read a string and count how many characters are:
// - letters
// - digits
// - spaces
// - other symbols
//   Each character must be classified manually.

#include <iostream>
#include <string>
using namespace std;

void charClassification(const string& s) {
    int count_spaces {0};
    int count_letter {0};
    int count_digits {0};
    int count_operators {0};
    int count_other {0};

    for (char c: s) {
        if (c == 32) {
            count_spaces++;
        }
        else if ((c >=33 && c <= 39) || c == 44 || c == 46 || (c >=58 && c<=64) || (c>=91 && c<= 96) || (c>=123 && c<=127)) {
            count_other++;
        }
        else if ((c >=40 && c <= 43) || (c == 45 || c == 47)) {
            count_operators++;
        }
        else if (c >=48 && c <= 57) {
            count_digits++;
        }
        else if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122) ) {
            count_letter++;
        }

    }
    cout << "Total spaces: "<<count_spaces<<endl;
    cout << "Total other symbols: "<<count_other<<endl;
    cout << "Total operators: "<<count_operators<<endl;
    cout << "Total spaces: "<<count_digits<<endl;
    cout << "Total letter: "<<count_letter<<endl;

}

int main() {
    const string word {"Me gusta las fresas con chocolate!"};
    charClassification(word);
    return 0;

}