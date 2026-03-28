#include<bits/stdc++.h>

using namespace std;

int solveTargetSum(vector<int>nums,int target){
    int n=nums.size();
    unordered_map<int,int>dp;
    dp.insert({0,1});
    for(int num:nums){
        unordered_map<int,int>nextDp;
        for(auto &it:dp){
            int sum=it.first;
            int count=it.second;
            nextDp[sum+num]+=count;
            nextDp[sum-num]+=count;
        }
        dp=nextDp;
    }
    return dp[target];
}

int main(){ 
     vector<int>nums={1,1,1,1,1};
     int res=solveTargetSum(nums,3);
     cout<<res;
     return 0;
}
