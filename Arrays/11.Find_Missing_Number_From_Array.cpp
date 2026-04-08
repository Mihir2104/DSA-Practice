#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//Time: O(N)
//Space: O(1)
class Solution{
   public:    
    int singleNumber(vector<int>& nums){
        int ans = 0;
        int n = nums.size()+1;
        //XOR of all elements
        for (auto it : nums){
            ans = ans ^ it;
        }
        
        //XOR of the result of previous XOR with all the elements
        for(int i = 1; i <= n; i++ ){
            ans = ans ^ i;
        }
        return ans;
    }
};


int main(){
    Solution s;
vector<int>v = {1,2,3,5,6};
   int res= s.singleNumber(v);
   cout<<res;

}