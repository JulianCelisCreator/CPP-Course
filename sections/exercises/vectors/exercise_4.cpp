//
// Created by juliancelis on 2026-02-26.
//
//
// Given a vector:
// Reverse only the second half
// Keep the first half unchanged
// If the size is odd, the middle element stays in place
// Example:
// [1, 2, 3, 4, 5, 6] → [1, 2, 3, 6, 5, 4]

using namespace std;

#include <vector>
#include <iostream>
std::vector<int> mirror_array (std::vector<int> &v) {
    int temporal {0};
    int pos {0};
    int index_end {0};

    pos = v.size()/2;
    index_end = pos / 2;
    if (v.size()%2 != 0) {
        pos++;
    }
    for(size_t i = 0; i<(index_end);i++) {
        temporal = v[(pos)+i];
        v[pos+i]= v[v.size()-1-i];
        v[v.size()-1-i] = temporal;
    }
    return v;
}

int main() {
    std::vector<std::vector<int>> entry_data = {
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5, 6, 7},
        {7},
        {10, 20},
        {1, 2, 3},
        {1,2,3,4,5,6,7,8,9,10}
    };
    std::vector<std::vector<int>> solution_data = {
        {1, 2, 3, 6, 5, 4},
        {1, 2, 3, 5, 4},
        {1, 2, 3, 4, 7, 6, 5},
        {7},
        {10, 20},
        {1, 2, 3},
        {1,2,3,4,5,10,9,8,7,6}

    };

    for (int i = 0; i<entry_data.size();i++) {
        std::vector<int> out_data;
        out_data= mirror_array(entry_data[i]);

        for (int data: out_data) {
            cout<<data<<endl;
        }
        if (out_data != solution_data[i]) {
            cout << "X Different X"<<endl;
        }
        else {
            cout << "Correct"<<endl;
        }
    }
}