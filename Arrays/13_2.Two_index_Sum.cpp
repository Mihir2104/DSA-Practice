#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(N)
//Space Complexity O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for (int i =0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()){
                  return {mp[complement],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

int main (){
    Solution s;
    vector <int> v =  {10, 5, 2, 7, 1, 9};
    vector<int> result = s.twoSum(v,8);
    cout<<result[0]<<" "<<result[1];

}