#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>&arr1,vector<int>&arr2){
    unordered_set<int>s(arr1.begin(),arr1.end());
    for(auto x:arr2){
       if(s.count(x)){
        cout<<x<<" ";
        s.erase(x);
       }
    }
}

int main(){
    vector<int>arr1={1,3,5,7};
    vector<int>arr2={4,3,5,6};
    solve(arr1,arr2);
    return 0;
}
