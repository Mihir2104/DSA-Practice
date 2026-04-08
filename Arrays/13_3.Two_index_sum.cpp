#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(N LOG N)
//Space Complexity O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int,int>> v;
        int l = 0;
        int r = nums.size() - 1;

        for (int i =0; i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());

        while(l < r){
           int sum = v[l].first + v[r].first;

            if(sum==target){
                return {v[l].second,v[r].second};
            }
            else if(sum > target) {
                r--;
            }
            else{
                l--;
            }

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