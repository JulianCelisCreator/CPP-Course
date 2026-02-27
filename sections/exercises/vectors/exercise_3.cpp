//
// Created by juliancelis on 2026-01-14.
//

// Maximum Subarray Sum (No Brute Force)
// Given a vector with positive and negative numbers:
//
// Find the contiguous subvector with the maximum sum
//
// Output:
//
// maximum sum
//
// starting index
//
// ending index
//
// 📌 You may not check all possible subvectors.
//
// {-2, 1, -3, 4, -1, 2, 1, -5, 4}
//
// Maximum sum: 6
//
// Starting index: 3
//
// Ending index: 6
//
// Subvector: [4, -1, 2, 1]
#include <iostream>
#include <vector>

using namespace std;

struct resultado {
    int max_sum;
    int start_index;
    int end_index;
};

resultado max_subArray(std::vector<int> const &v) {
    resultado r;
    int current_sum{v[0]};
    int temp_start{0};
    r.start_index = 0;
    r.end_index = 0;
    r.max_sum = v[0];

    for (size_t i = 1; i < v.size(); i++) {
        if (current_sum + v[i] < v[i]) {
            current_sum = v[i];
            temp_start = i;
        } else {
            current_sum += v[i];
        }
        if (current_sum > r.max_sum) {
            r.max_sum = current_sum;
            r.start_index = temp_start;
            r.end_index = i;
        }
    }
    return r;
}


int main() {
    resultado r;
    std::vector<std::vector<int> > testCases = {
        {-2, 1, -3, 4, -1, 2, 1, -5, 4},
        {1, 2, 3, 4},
        {-8, -3, -6, -2, -5, -4},
        {5, 4, -1, -2, -3},
        {-2, -1, 3, 4},
        {1, -1, 1, -1, 1}
    };

    std::vector<std::vector<int> > solution = {
        {4, -1, 2, 1},
        {1, 2, 3, 4},
        {-2},
        {5, 4},
        {3, 4},
        {1}
    };

    for (size_t i = 0; i < testCases.size(); i++) {
        resultado r1{};

        std::vector<int> input = testCases[i];
        r1 = max_subArray(input);
        cout << i << ". " << " Solución" << endl;;
        cout << "Indice inicio: " << r1.start_index << endl;
        cout << "Indice final: " << r1.end_index << endl;
        cout << "Suma máxima: " << r1.max_sum << endl;


        std::vector<int> subarray;
        for (size_t j = r1.start_index; j <= r1.end_index; j++) {
            subarray.push_back(input[j]);
        }
        if (solution[i] != subarray) {
            cout << "The result are different" << endl;
        } else {
            cout << "The result is expected" << endl;
        }
    }
    return 0;
}
