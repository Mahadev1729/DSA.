#include<bits/stdc++.h>

using namespace std;

vector<int>solve(vector<int>&nums,int targetSum){
    int n=nums.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int comp=targetSum-nums[i];
        if(mpp.find(comp)!=mpp.end()){
            return {mpp[comp],i};
        }
        mpp[nums[i]]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int>arr={2,1,4,5,6};
    vector<int>res=solve(arr,5);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}


