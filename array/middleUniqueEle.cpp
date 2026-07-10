#include<bits/stdc++.h>

using namespace std;

bool uniqueMiddleEle(vector<int>&nums){
    map<int,int>mpp;
    int n=nums.size();
    int mid=n/2;
    for(int it:nums){
      mpp[it]++;
    }
    return mpp[nums[mid]]==1;
}
int main(){
   vector<int>arr={1,2,3};
   bool res=uniqueMiddleEle(arr);
   cout<<res;
   return 0;
}
