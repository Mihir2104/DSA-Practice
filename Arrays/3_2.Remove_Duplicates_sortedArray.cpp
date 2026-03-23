#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// We traverse the array once using a single loop.

// Space Complexity: O(1)
// No extra space is used. The modification is done in-place.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int i = 0;

        for (int index = 1; index < nums.size(); index++) {
            if (nums[index] != nums[i]) {
                i++;
                nums[i] = nums[index];
            }
        }

        return i + 1;
    }
};

int main() {
    Solution s;

    vector<vector<int>> testCases = {
        {0,0,1,1,1,2,2,3,3,4},
        {1,1,2},
        {1,2,3},
        {1},
        {}
    };

    for (auto nums : testCases) {
        int k = s.removeDuplicates(nums);

        cout << "k = " << k << " | Array: ";
        for (int i = 0; i < k; i++)
            cout << nums[i] << " ";
        cout << endl;
    }

    return 0;
}