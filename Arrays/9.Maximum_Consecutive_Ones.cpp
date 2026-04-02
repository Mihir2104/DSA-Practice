#include <iostream>
#include <vector>
using namespace std;
//Time:O(N)
//Space:O(1)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }
            maxi = max(maxi, count);
        }

        return maxi;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int result = obj.findMaxConsecutiveOnes(nums);

    cout << "Max consecutive ones: " << result;

    return 0;
}