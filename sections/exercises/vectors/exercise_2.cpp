//
// Created by juliancelis on 2026-01-12.
//Given a vector:
//
// Find the value that appears most frequently
//
// If there is a tie, choose the smallest value
//
// If all values appear once, report no repetitions

#include <iostream>
#include <vector>

bool max_frequency(std::vector <int>& v, int& result) {
    int record{0};

    if (v.empty()) {
        return false;
    }
    result = v[0];
    for (size_t i = 0; i<v.size();i++) {
        int counter{0};
            for (size_t j = 0; j<v.size(); j++) {
                if (v[i] == v[j]) {
                    counter++;
                }
            }
        if (counter > record ) {
            record = counter;
            result = v[i];
        }
        else if (counter == record && counter > 1 && v[i] < result) {
            record = counter;
            result = v[i];
        }

    }
    return record > 1;
}

int main () {
    std::vector<std::vector<int>> testCases = {
        {1, 2, 3, 4},        // No repetitions
        {2, 2, 1, 1},       // 1
        {-1, -1, -2, -2},    // -2
        {5, 5, 5, 2, 2},     // 5
        {}
    };



    int record;
    for (int i = 0; i < testCases.size(); i++) {
        std::vector<int> input = testCases[i];

        max_frequency(input, record);
        if (max_frequency(input, record)) {
            std::cout << "The most frequent value: " << record << std::endl;
        } else {
            std::cout << "No repetitions"<<std::endl;
        }
    }

    return 0;

}