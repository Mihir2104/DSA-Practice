#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//Time: O(N Log(N))
//Space: O(N)
class Solution{
   public:    
    int singleNumber(vector<int>& nums){
      int ans =0;
      for(auto it : nums){
        ans = ans^it;
      }
      return ans;
    }
};


int main(){
    Solution s;
vector<int>v = {2,2,4,3,3};
   int res= s.singleNumber(v);
   cout<<res;

}