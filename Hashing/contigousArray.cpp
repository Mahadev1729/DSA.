#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums){
    int n=nums.size();
    int curr_sum=0;
    int maxLen=INT_MIN;
    unordered_map<int,int>mpp;
    mpp[0]=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            nums[i]=-1;
        }
    }
    for(int i=0;i<n;i++){
        curr_sum+=nums[i];
        if(mpp.find(curr_sum)!=mpp.end()){
            int last=mpp[curr_sum];
            maxLen=max(maxLen,i-last);
        }else{
            mpp[curr_sum]=i;
        }
    }
    return maxLen;
}

int main(){
   int res;
   vector<int>arr={1,1,1,0,0,0,0,1,0};
   res=solve(arr);
   cout<<res;
   return 0;
}
