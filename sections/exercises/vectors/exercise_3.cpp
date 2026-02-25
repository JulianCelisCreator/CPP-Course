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

std::vector<int> max_subArray(std::vector<int> const &v) {
    int max_sum {v[0]};
    int start_index {0};
    int end_index {0};
    int current_sum{0};
    int temp_start{0};

    std::vector<int> temporal;
    for (size_t i= 0; i<v.size();i++ ) {
        temporal.push_back(v[i]);

        for (size_t j= temp_start; j<temporal.size();j++ ) {

            current_sum += temporal[j];
        }
        cout<<current_sum<<endl;
        if (current_sum > 0) {
            if (current_sum>max_sum) {
                max_sum = current_sum;
                cout<<max_sum<<endl;
                temp_start = i;
            }
        }
        else {
            temporal.clear();
            current_sum = 0;
        }
    }
    return temporal;
    }




int main () {

    std::vector<std::vector<int>> testCases = {
        {-2, 1, -3, 4, -1, 2, 1, -5, 4}
    };

    std::vector<std::vector<int>> solution = {
        {4,-1,2,1}
    };

    for (size_t i=0; i < testCases.size();i++) {
        std::vector<int> input = testCases[i];
        std::vector<int> correction =  max_subArray(input);
        if (solution[i] != correction) {
            cout<<"The result are different";
        }
        else {
            cout<<"The result are expected";
        }
    }
}