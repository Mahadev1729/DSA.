#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>&nums){
    map<int,int>freq;
    for(auto it:nums){
        freq[it]++;
    }

    for(auto it:freq){
        cout<<it.first<<":"<<it.second<<endl;    
    }
}


int main(){
    vector<int>nums={3,1,2,4,5,0};
    solve(nums);
    return 0;
}
