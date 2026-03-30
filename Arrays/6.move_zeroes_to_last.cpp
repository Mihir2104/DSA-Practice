#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;

        // Find first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1) return;

        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {0, 1, 0, 3, 12};

    obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}