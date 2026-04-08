#include<iostream>
#include<bits/stdc++.h>

using  namespace std;
//Brute Force (better)
//Time Complexity O(N)^2
//Time Complexity O(1)

class Solution{
    public:
        int longestSubarr(vector <int> &nums,int k){
            
            int maxlength=0;
            int length=0;
                for (int i = 0; i <nums.size(); i++){
                        int sum = 0; 
                    for (int j = i; j < nums.size();j++){
                            sum = sum + nums[j];
                            if(sum==k){
                                length = j-i+1;
                                maxlength =max(maxlength,length);
                            }

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
