#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Time complexity O(N)
//Space Complexity O(1)

class Solution{
    public:
        int longestSubarr(vector <int> &nums,int k){
            int n = nums.size();
            int left = 0;
            int sum =nums[0];
            int right =0;
            int maxlength = nums[0];

            while(right<n){

                while(left<=right && sum > k){
                        sum -= nums[left];
                        left++;
                }

                if(sum==k){
                    maxlength=max(maxlength,right-left+1);
                }

                right++;

                if(right<n){
                    sum+= nums[right];
                }
            }

            return maxlength;

        }
};

int main(){

    Solution s;
    vector <int> v =  {10, 5, 2, 7, 1, 9};
    int result = s.longestSubarr(v,15);
    cout<<result;

return 0;
}