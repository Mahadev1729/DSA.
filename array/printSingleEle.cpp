#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums){
    // unordered_map<int,int>mpp;
    // for(auto it:nums){
    //     mpp[it]++;
    // }

    // for(auto it:mpp){
    //     if(it.second==1){
    //         return it.first;
    //         break;
    //     }
    // }
    // return -1;
    int ans=0;
    for(int it:nums){
        ans^=it;

    }
    return ans;
}

int main(){
    vector<int>nums={1,1,2,2,3};
    int res=solve(nums);
    cout<<res;
    return 0;

}
