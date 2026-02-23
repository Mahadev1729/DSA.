#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums){
    int totalWater=0;
    int n=nums.size();
    int l=0;
    int r=n-1;
    int lmax=0;
    int rmax=0;
    while(l<r){
        lmax=max(lmax,nums[l]);
        rmax=max(rmax,nums[r]);
        if(lmax<rmax){
            totalWater+=(lmax-nums[l]);
            l++;
        }else{
            totalWater+=(rmax-nums[r]);
            r--;
        }
    }
    return totalWater;
}

int main(){
     vector<int>nums={23,13,45,67,89,90};
     int res=solve(nums);
     cout<<res;
     return 0;
}
