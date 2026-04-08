#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(N^2)
//Space Complexity O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i =0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                    if (nums[i]+nums[j]==target){
                          return{i,j};
                    }
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