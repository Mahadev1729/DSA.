#include<bits/stdc++.h>

using namespace std;

int count_subarray_xor(vector<int>&nums,int k){
   int xr=0;
   map<int,int>mpp;
   mpp[xr]++;
   int cnt=0;
   for(int i=0;i<nums.size();i++){
    xr=xr^nums[i];
    int x=xr^k;
    cnt+=mpp[x];
    mpp[xr]++;
   }
   return cnt;
}

int main(){
    vector<int>arr={4,2,2,6,4};
    int res=count_subarray_xor(arr,6);
    cout<<res;
    return 0;
}
