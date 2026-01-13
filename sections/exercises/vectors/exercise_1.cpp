//
// Created by juliancelis on 2026-01-12.
//

#include <iostream>
#include <vector>
void test_case (std::vector <int>& numbers) {
    int insert_pos = 0;
    for (size_t i=0; i<numbers.size();i++) {
        if (numbers[i] % 2 == 0 ) {
            int temp = numbers[i];
            for (size_t j = i; j > insert_pos; j--) {
                numbers[j] = numbers[j-1];
            }
            numbers[insert_pos] = temp;
            insert_pos++;

        }
    }
}

void print_vector(std::vector<int>& numbers) {
    std::cout << "[ ";
    for (int number:numbers) {
        std::cout << number << " ";
    }
    std::cout << " ]";

}
int main () {
    std::vector<std::vector<int>> testCases = {
        {3, 2, 4, 1, 6, 5},
        {},
        {2, 4, 6},
        {1, 3, 5},
        {2, 1, 2, 1},
        {1},
        {2},
        {1, 2},
        {2, 1},
        {4, 3, 2, 1}
    };

    std::vector<std::vector<int>> expectedResults = {
        {2, 4, 6, 3, 1, 5},
        {},
        {2, 4, 6},
        {1, 3, 5},
        {2, 2, 1, 1},
        {1},
        {2},
        {2, 1},
        {2, 1},
        {4, 2, 3, 1}
    };

    for (int i = 0; i < testCases.size(); i++) {
        std::vector<int> input = testCases[i];
        std::vector<int> expected = expectedResults[i];

        test_case(input);

        std::cout << "Test " << i + 1 << "\n";
        std::cout << "Result   : ";
        print_vector(input);
        std::cout << "\nExpected : ";
        print_vector(expected);

        if (input == expected) {
            std::cout << "\n✅ PASS\n\n";
        } else {
            std::cout << "\n❌ FAIL\n\n";
        }
    }

    return 0;

}