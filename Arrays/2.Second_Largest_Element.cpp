#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int second_largest = INT_MIN;

        if (nums.size() < 2)
            return -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                second_largest = largest;
                largest = nums[i];
            }
            else if (nums[i] > second_largest && nums[i] != largest) {
                second_largest = nums[i];
            }
        }

        return (second_largest == INT_MIN) ? -1 : second_largest;
    }
};

int main() {
    Solution s;

    vector<vector<int>> testCases = {
        {1,2,3,4,5},        // Normal
        {5,1,3,2,4},        // Unsorted
        {10,10,5,5},        // Duplicates
        {7,7,7,7},          // All same
        {3,8},              // Two elements
        {5},                // Single element
        {-1,-2,-3,-4},      // Negative numbers
        {-10,5,3,20},       // Mixed
        {100000,99999,100000}, // Large values
        {9,8,1,2,3}         // Second largest at start
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i+1 << ": ";

        for (int num : testCases[i])
            cout << num << " ";

        cout << "\nSecond Largest: "
             << s.secondLargestElement(testCases[i]) << endl;

        cout << "-------\n";
    }

    return 0;
}