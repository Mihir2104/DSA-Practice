#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//Time: O(N Log(N))
//Space: O(N)
class Solution{
   public:    
    int singleNumber(vector<int>& nums){
        map<int,int> mpp;
        for(auto it :nums ){
            mpp[it]++;
        }
        
        for(auto it : mpp){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};


int main(){
    Solution s;
vector<int>v = {2,2,4,3,3};
   int res= s.singleNumber(v);
   cout<<res;

}