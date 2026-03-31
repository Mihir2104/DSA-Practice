#include<iostream>
#include <bits/stdc++.h>

using namespace std;
// Time : O( (m+n)log(m+n) )
// Space : O(m+n)

class Solution{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b){
        map<int,int> m;
        for(int i = 0; i < a.size(); i++){
            m[a[i]]=1;
        }
        for(int i =0; i<b.size();i++){
            m[b[i]]=1;
        }

        vector<int> result;
        for(auto it:m){
            result.push_back(it.first);
        }
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