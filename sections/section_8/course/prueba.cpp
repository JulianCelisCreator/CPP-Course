//
// Created by juliancelis on 2025-12-26.
//

#include <iostream>;
#include <vector>;

using namespace std;

#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result = 0;
    for(int i=0;i<vec.size();i++) {
        for(int j = i; j< vec.size();j++){
            if(i != j) {
                cout<<vec.at(i) << " * " << vec.at(j) << " ";
                result += vec.at(i) * vec.at(j);
            }
            else {
                continue;
            }
        }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main() {
    vector<int> vec {1,2,3};
    calculate_pairs(vec);

}