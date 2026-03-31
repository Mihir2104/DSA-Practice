#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (target == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> myNumbers = {10, 20, 30, 40, 50};
    int targetValue = 30;
  
    int result = sol.linearSearch(myNumbers, targetValue);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the list." << endl;
    }

    return 0;
}
