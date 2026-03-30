#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n = nums.size();

        // handle k > n
        k = k % n;

        reverse(nums, 0, n - k - 1);
        reverse(nums, n - k, n - 1);
        reverse(nums, 0, n - 1);
    }

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    obj.rotateArray(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}