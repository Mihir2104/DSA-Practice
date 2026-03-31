#include<iostream>
#include<bits/stdc++.h>

// Time : O( (m+n)log(m+n) )
// Space : O(m+n)

using namespace std;

class Solution{
    public:
    vector<int>findUnion(vector<int>&a,vector<int>&b){
        set<int> s;
        for(int x:a){
            s.insert(x);
        }
        for(int x:b){
            s.insert(x);
        }
       vector<int> result(s.begin(), s.end());
       return result;
    }
};

int main(){

    Solution s;

    vector<int> a= {1,2,2,6,8};
    vector<int> b = {2,3,6,5,8,7};

    cout<<"union of arrays :"<<endl;
    vector<int> res = s.findUnion(a,b);
    for (auto it:res){
        cout<<it;
    }



}