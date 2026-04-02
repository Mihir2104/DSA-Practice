#include <iostream>
#include <vector>
using namespace std;

//time: O(m+n)
//sapce : O(m+n)

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

    int x = nums1.size();
    int y = nums2.size();

    vector<int> result;

    int i = 0, j = 0;

    while (i < x && j < y) {
        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }
        else {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    while (i < x) {
        if (result.empty() || result.back() != nums1[i])
            result.push_back(nums1[i]);
        i++;
    }

    while (j < y) {
        if (result.empty() || result.back() != nums2[j])
            result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main() {

    vector<int> nums1 = {1, 1, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 5};

    vector<int> result = unionArray(nums1, nums2);

    cout << "Union Array: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}