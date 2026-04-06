#include<bits/stdc++.h>

using namespace std;

vector<int>solution(vector<int>nums,int target){
    int n=nums.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int comp=target-nums[i];
        if(mpp.count(comp)){
            return {mpp[comp],i};
        }
        mpp[nums[i]]=i;
    }
    return {};
}

int main(){
    vector<int>arr={3,4,5,7,8};
    vector<int>res=solution(arr,8);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
